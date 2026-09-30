#include <iostream>

// Definition of Abstraction, if a class has at least one virtual pure functions then, it is considered as Abstraction class.

using std::cout;
using std::cin;
using std::endl;

// This is an Abstraction Class!
// Even you see a normal function, but it has an pure virtual function, so it is accepted 

class Base
{
  public:
    virtual void func() = 0; // This is virtual pure function, it has no meaning btw ^^, but it acts as Blueprint to inherited classes

    void PrintHello()
    {
      cout << "Hello" << endl;
    }

  virtual ~Base(){} // this is for inherited ones ^^
};

class Derived1 : public Base
{
  public:
    void func()
    {
      cout << "Derived 1" << endl;
    }
};

class Derived2 : public Base
{
  public:
    void func()
    {
      cout << "Derived 2" << endl;
    }
};

int main(void)
{
  // Base base; // we cannot create an object through abstraction class

  // But it can act as Blueprint for other classes, Lets try it out

  Base *base[] = {
    // new Base(), well this also doesn't work
    new Derived1(),
    new Derived2()
  };

  for(int i = 0; i < 2; i++)
    base[i]->func();

  for(int i = 0; i < 2; i++)
    delete base[i];
    
  return 0;
}