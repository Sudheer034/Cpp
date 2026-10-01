#include <iostream>

// i thought references were small deal, but didn't expect those are useful lol

using namespace std;

class Ref
{
public:
  int& data; // there is an gotcha here, we need to initialise with variable

  Ref(int data) : data(data){} // so constructor is used

  int& getData()
    {
      return data;
    }
};

int main()
{
  int a = 10;
  Ref ref(3);

  cout << ref.data << endl;

  ref.getData() = 20; 
  // we can modify the reference through functions, not by assigning, though.
  // references are cool though, they don't take storage as pointer does, the syntax also look clean!

  cout << ref.data << endl;

  // actually i didn't know that this "Range Based Loop" exists +_+

  // syntax of Range Based Loop
  // syntax:
  //    for(datatype var: list)
  //      {}  |       |    |
  //          |       |    +---> the array
  //          |       +---> a variable is the value of indices of list[i]
  //          +--> datatype of the variable, that to be iterated(ex: list, here is an array)

  int list[] = {1,2,3};

  for(int& a : list) // we use reference to reduce size of copy, reference is alias of a variable, and
  // maybe this Range Based Loop is a function which updates the reference
    {
      //before
      cout << a << " ";
      a = a+1;
      //after
      cout << " | " << a << " " << endl;
    }

  return 0;
}