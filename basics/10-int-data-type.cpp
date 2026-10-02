#include <cstdint> // well, i actually ignore these library in C/C++
// these library is spcially designed for int, just for size of ints.
// typically standard int size is 4 bytes which is 32-bits
// we don't usually use that big numbers, and some devices take less data, if we overload them.
// they might fail.

// so yeah, Lets begin!

int main()
{
  int8_t intOneByte; // it is an interger having size 1 byte or 8-bits, well it is signed, so we can only use, from -128 to 127

  uint8_t unsignedIntOneByte; // same as integer, but it is unsigned, the range is (0, 255)

  int16_t intTwoByte; // ig you noticed the pattern already, from on lets use this!
  return 0;
}