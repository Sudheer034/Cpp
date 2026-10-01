#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

using std::string;
using std::vector;

int main(void)
{
  vector<int> vec1 = {1,2,3};
  vector<int> vec2(vec1); // man, this is same as vec2 = vec1, idk what to say lol

  vector<int> Ivec1{2,3,4}; // man, vector syntax is kinda confusing lol, how did they think like this
  //            |
  //            +--> this is same as, Ivec1 = {2,3,4};

  vector<int> Nvec1(4, 2); // vector syntax is so flexible lol
  //                |  |
  //                |  +--> this index represents data for each index
  //                +--> this index represents size

  vector<string> Svec1{2}; // this initialise NULL string lol, because, 2 isn't string, but a size here
  // vectors kinda play dual role with the syntax

  vector<string> Svec2{2, "abc"}; // this is off size 2 and has all elements "abc"

  Svec2.at(1) = "123";
  
  for(int& a : Nvec1)
    cout << a << endl;

  for(string& a: Svec2)
    cout << a << endl;

  return 0;
}