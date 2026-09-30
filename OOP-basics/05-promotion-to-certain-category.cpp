#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Employee // We created the base class!
{

  //    [E]

  void PayRaise()
  {
    cout << "You have been by \'5%\' of income" << endl;
  }
};

struct Engineer : Employee // we created the derived class!
{

  //     [E]
  //    /
  // [En]

  void PayRaise() // [for this class, it has been overriden]
  {
    cout << "You have been by \'10%\' of income" << endl;
  }
};

int main(void)
{
  Employee *person = new Engineer(); 
  // we created a person, which is a pointer to Engineer Struct  
  
  //     [E]
  //    /
  // [En]<---[P](Person)
  
  // Let me give you a quick idea on Static Binding
  // Static Binding is when the object is created with a Base object, and it is bounded
  // to that, even the pointer points to somwhere else, during 
  // compile time, it executes whats it choose base object.
  // I know this is pretty confusing, its cpp it can't be helped,
  // but we got solution for it, called "virtual functions", we
  // can make dynamic binding through, i will discuss about onto
  // the next file.

  // For now: the compiler checks, is it Static Binding or Dynamic Binding
  // Since it is an Static Binding, the compiler straight away compiles the Base class's Method 

  person->PayRaise(); // it happened here

  //      [E]<-----+
  //      /        |____(The Path chosen by compiler)
  //     /         |
  // [En]<--------[P](Person)

  // still even after that the Person pointer still points to Engineering object.

  delete person;
  person = nullptr;

  return 0;
}