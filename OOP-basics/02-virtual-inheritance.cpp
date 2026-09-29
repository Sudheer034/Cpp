#include <iostream>

// We use virtual inheritance to resolve the ambiguity problem ^^

class Parent // created a Parent Node
{
  public:
    int data = 1;
};

// Mental Model:
//     [P]

class Child : virtual public Parent 
// we created virtual base table, where the data of Parent is 
// stored in a Look-Up table i believe.

// The Virtual Bases Table stores Virtual Base pointers which points to classes, that we inherited from.
{};

//      [P] <--\
//       |      \
//      [C] --> [vbptr] from virtual base pointer

// There is no duplication of data will be there
// Note: if you change any data from Child class,
// Parent class would get affected too.

int main(void)
{
  return 0;
}