#include <iostream>
#include <string>

// Let's Begin DECONSTRUCTORS!

// gonna use same code as constructors

using std::cout;
using std::cin;
using std::endl;

using std::string;

struct Constructor
{
  string a;
  Constructor(string name, string state) : a(name), b(state) // we created an constructor
  {
    cout << "Constructor is Successful" << endl
         << "Name: " << a << endl
         << "State: " << b << endl;
  }
  string b;

  ~Constructor()
  {
    cout << "Destructor is Successful" << endl;
  }
};

int main(void)
{
  // another syntax for constructors

  Constructor Hello("name", "state");

  // i was compiling my old file and thinking that my destructor got failed lol.

  // btw when declaring destructor, if you have any pointer type variable, you should delete them.
  
  // also when you create object with pointer, when freeing the pointer, the destructors activates
  
  // ex: struct Destructor
  //     {
  //       int *p;
  //
  //       ~Destructor(){delete p}
  //     }

  // initalising with pointer in main
  // Destructor *p = new Destructor();
  // after all the work
  // delete p // here destructor is activated

  // i saw about virtual destructor, i will update it on the next file
  
  return 0;
}