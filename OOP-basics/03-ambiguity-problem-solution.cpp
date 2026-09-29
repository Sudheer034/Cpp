#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct Parent // Parent Node has been created
{
  int data = 9;
};

//      [P]

struct Father : virtual public Parent // Father node has been created
{
  int data = 12;
};

//    |---------->[P]
//    |          /
// [vbptr1]<--[F]

// As you can see Father struct is pointing to Parent class through virtual Inheritance

struct Mother : virtual public Parent
{};


//    |---------->[P]<---------|
//    |          /   \        |
// [vbptr1]<--[F]     [M]-->[vbptr2]

// same case as Father struct for Mother struct

struct Child : public Mother, public Father
{};

//         |---------->[P]<---------|
//         |          /   \        |
//   |-->[vbptr1]<--[F]     [M]-->[vbptr2] <---|
//   |                \   /                    |
//   |-----------------[C]----------------------

// The Child class inherits the Mother and Father's virtual base pointers.
// so it can also be accessed to the Parent struct.

int main(void)
{
  Child c;

  cout << c.data << endl;
  return 0;
}