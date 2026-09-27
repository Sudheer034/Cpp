#include <iostream>
#include <iomanip> // we got an new header file called "<iomanip>" ^^
// iomanip stands for Input Output Manipulators

using std::cout; // we got new way to use short cuts for namespaces functions or variables without using scope operator("::") 
using std::cin;
using std::endl; // we got shortcut for endl, endl is '\n'
using std::setw; // this is function of <iomanip>, this sets width of a integer, not floating point num btw
using std::setprecision; // this is for floating point number

int main(void)
{
  int List[10]; // we created an array!, and still in here it is a pointer!

  cout << "Enter elements of 10: " << endl; // see the shortcut way of using print

  for(int i = 0; i< 10; i++)
  {
    cin >> List[i]; // we give a input, lets say i chose '1'
  }

  cout << "The List: " << endl;

  for(int i = 0; i< 10; i++)
  {
    cout << setw(2) << i + 1 << ". " << List[i] << endl;
    // here we used setw, it is for limiting the width of the integer.

    // there i took '1' as input, now this outputs

    // " 1. 1", notice there is a space for the first element, so
    // we can say that setw is points to only 1 variable at a time.
  }

  return 0;
}