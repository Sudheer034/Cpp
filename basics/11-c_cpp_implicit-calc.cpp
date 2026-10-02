#include <iostream>
#include <cstdint>

using std::cout;
using std::endl;

// today i realised C/C++ computes the raw numbers operators before the compiling!

int main()
{
  int8_t var = 150;
  int8_t result = var * (5/150); // you expect it would output 5 right?

  // cout << "result: " << result << endl; // well it didn't work, cpp doesn't support this, we gotta typecaste to int to print ;-;

  cout << "result: " << static_cast<int>(result) << endl; // this outputs: 0

  // what cpp does is it precomputes 5/150, before compilation. int of fractions is 0
  // (5/150) is 0 and 0 * var is 0

  // well the solution for these is either to use float or try multiplying in different way

  int16_t var2 = 150;

  int16_t result2 = (var2 * 5)/150;

  cout << "Result 2: " << static_cast<int>(result2) << endl; // it outputs 5, note that i changed it because, bit-overflow
  return 0;
}