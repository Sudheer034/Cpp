#include <iostream>

using std::cout;
using std::cin;
using std::endl;

typedef struct Struct // we defined a struct!
{
  int data = 5; // wait what!, we can set values inside a STRUCT!!
  void string() // METHODS TOO?!
  {
    cout << "Helllo" << endl;
  }

  // man, i was thinking using function pointers for structs.
  // i will put a quick idea, though it is mostly mechanical

  void (*Hello)();
}Structs;


void hello()
{
  cout << "Hello" << endl;
}

class Class // we defined a class!
{
  private: // class defaultly starts as private.
  public:
    int data = 5; // we can set values into the class!
};

struct ParentStruct
{
  int p = 2;
};

struct ChildStruct : ParentStruct // struct inheritance
{};

class ParentClass
{
  public:
    int c = 2;
};

class ChildClass : public ParentClass, public ParentStruct // man, it also can inherit structs too...
{};

 struct GrandChildStruct : public ChildClass, public ChildStruct
 {}; // this can't be possible due to ambiguity(Warning though)

int main()
{
//   Structs status;
//   cout << status.data << endl;
//   status.string();

//   status.Hello = hello; // function pointer logic
//   status.Hello();

  // I will try callbacks on another file lol

  ChildStruct Child;
  ChildClass C_Child;

  cout << Child.p << endl;
  cout << C_Child.ParentClass::c << endl 
  << C_Child.ParentStruct::p << endl; // this is also another of calling functions from inheritance in Cpp

  // ig this file isn't enough, this is mostly introducing, next file, i will test it.

  return 0;
}