#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std:: endl;

using std::vector;
using std::string;

int main(void)
{
  // operations in vectors

  vector<int> List1 = {1,2,3};
  vector<int> List2(List1);

  // '==' operation

  int result1 = (List1 == List2); // it returns a boolean
  // if the elements are equal on size, and corresponding elements, it results 1.
  // if not 0

  cout << result1 << endl;

  // i think you can guess other operations would it be, <, <=, >, >= and some more.  
  return 0;
}

// ANd thats it, i think, actually, im bit tired now, maybe in future i will update or maybe not.
//THANKS FOR VISITING MY REPOSITORY