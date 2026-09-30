#include <iostream>

// Let's Begin to learn virtual destructors!

using std::cout;
using std::endl;
using std::cin;

class Base
{
  public:
    virtual void Update()
    {
      cout << "This is Base" << endl;
    }

    virtual ~Base()
    {
      cout << "Base destroyed" << endl;
    }
};

class Derived1 : public Base
{
  public:
    void Update() override
    {
      cout << "Derived1" << endl;
    }

    /*~Derived1()
    {
      cout << "Derived1 Destroyed" << endl;
    }*/
};

class Derived2 : public Base
{
  public:
    void Update() override
    {
      cout << "Derived2" << endl;
    }

    // commenting this is fine! and still they get destroyed

    /* ~Derived2()
    {
      cout << "Derived2 Destroyed" << endl;
    }
      */
};

// Actually every class has its default destructors are initialised by default.
// you can take advantage of it using virtual destructors, to delete all at a time, thats the key of virtual destructors ^^

int main(void)
{
  Base *ptr[] = {
    new Base(),
    new Derived1(),
    new Derived2()
  };

  for(int i = 0; i < 3; i++)
    ptr[i]->Update();

/* output: This is Base
           Derived1
           Derived2*/

  for(int i = 0; i < 3; i++) 
    delete ptr[i];
/* output: Base destroyed
           Base destroyed
           Base destroyed*/

// And this is it, bye ^^
  return 0;
}