#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct Animal
{
  virtual void MakeSound() 
  // created an virtual function pointer to refer here in virtual function table
  {
    cout << "You'll hear an sound" << endl;
  }
};

// A has an virtual function table, which stores the addresses of functions

//                          Base: Virtual Function Table
//      [A, vfptr]                       [&MakeSound]
//                                       [          ]

// btw each class, when virtual functions are defined virtual function pointers also exists
struct Dog : public Animal
{
  void MakeSound() override 
  // we overriding the function of MakeSound function
  {
    cout << "Woof!" << endl;
  }
};

//                          Base: Virtual Function Table
//       [A, vfptr]                [&MakeSound]
//      /                          [          ]
//     /
//    /                     Derived: Virtual Function Table
//  [D, vfptr]                [&MakeSound(overridened one)]

int main(void)
{
  Animal *dog = new Dog;

  //                          Base: Virtual Function Table
  //       [A, vfptr]                [&MakeSound]
  //      /                          [          ]
  //     /
  //    /                     Derived: Virtual Function Table
  //  [D, vfptr]<---+             [&MakeSound(overridened one)]
  //                |
  //                |
  //               [d](dog)

  dog->MakeSound();

  // When function is called the compiler checks is it Dynamic Binding or Static Binding.
  // it realises its an Dynamic Binding, so

    //                          Base: Virtual Function Table
  //       [A, vfptr]                [&MakeSound]
  //      /                          [          ]
  //     /  +-------------+ 
  //    /   |             |         Derived: Virtual Function Table
  //  [D, vfptr]<---+     |             [&MakeSound(overridened one)]
  //      |         |     |                |         |
  //      |         |     +----------------+         |
  //      |         |         (Req. to Vtable)       |
  //      |        [d](dog)                          |
  //      |                                          |
  //      +------------------------------------------+
  //                   (Response from vtable)

  // that looks like a mess ig ^^
  // you might wonder, why don't we just go directly to address, yeah i kinda have the same about
  // i think it is because when multiple derived virtual table exists, it can't multiple addresses 
  // at a time, so thats why vtables are used i believe. 

  delete dog;
  dog = nullptr;
  
  return 0;
}