#include <iostream>

// Ambiguity problem occurs, when classes or structs have
// Same data and creates duplication, lets test it out

using std::cout;
using std::cin;
using std::endl;

// It's Diamond structured Problem

class Parent // Created the Head class
{
  public:
    int data = 19;
};

// Imagine there is a Parent Node

//        [P]

class Mother : public Parent 
// Mother Inherits from Parent's Class, so it also has data = 19;
{};

//        [P]
//       /
//     [M]

// Parent Node branches to Mother's node

class Father : public Parent
// Father Inherits from Parent's Class, so same case Mother's
{};

//        [P]
//       /   \
//     [M]   [F]

// same case as Mother's, but Mother and Father are on Seperate Branch.


class Child : public Father, public Mother
{};

//        [P]
//       /   \
//     [M]   [F]
//       \   /
//        [C]

// As You can see there is an Repeated data for Child Class
// The compiler throws an error of ambguity
// I will Update its solution onto the next file ^^

int main()
{
  Child P;
  cout << P.data << endl;
  return 0;
}
