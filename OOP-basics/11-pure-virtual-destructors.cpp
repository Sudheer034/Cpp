#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// This is an Abstraction Class tpp ^^
// even if we modify print function as normal function, the destructor act as pure-virtual-function

class Base
{
  public:
    virtual void print() = 0;
    /*{
      cout << "Base" << endl;
    }*/

    virtual ~Base() = 0; // this doesn't work, my terminal said, undefined reference to `Base::~Base()`
};

// C++ allow this

Base::~Base()
{
  cout << "Destroyed" << endl;
}

class Derived1 : public Base
{
  public:
    void print() override
    {
      cout << "Derived1" << endl;
    }
};

class Derived2 : public Base
{
  public:
    void print() override
    {
      cout << "Derived2" << endl;
    }
};

int main(void)
{
  Base *base[] = 
  {
    new Derived1(),
    new Derived2()
  };

  for(int i = 0; i < 2; i++)
    base[i]->print();

  for(int i = 0; i < 2; i++)
    delete base[i];
  return 0;
}