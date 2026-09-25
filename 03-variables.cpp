#include <iostream>
#include <string> // a string header file

// NOTE:: all are signed bit, using 2's complement.
// a quick idea, the MSB is considered as sign bit, we use that to divide the 2^n to (2^(n-1), 2^(n-1)-1) [we start from 0 from positive side]

int main(void)
{
  std::cout << "size of integer: " << sizeof(int) << std::endl;
  // integer which is in decimal format ex: 1,2,3.. takes 4 bytes of storage and can generate (-2^(31), 2^(31)-1) numbers  

  std::cout << "size of short integer: " << sizeof(short int) << std::endl;
  // short interger which half size of interger.
  // range of nums: (-2^(15), 2^(15)-1)

  std::cout << "size of long integer: " << sizeof(long int) << std::endl;

  // range for long int: (-2^(63), 2^(63)-1)

  std::cout << "size of long long integer: " << sizeof(long long int) << std::endl;

  // range for long long int: (-2^(63), 2^(63)-1)

  std::cout << "size of char: " << sizeof(char) << std::endl;

  // range for a character :: (-2^(7), 2^(7)-1)
  // NOTE: Chars are decoded into ASCII format(if i remember correctly)

  std::cout << "size of string: " << sizeof(std::string) << std::endl;

  // a new data type from cpp! using std class, i believe
  // its range of taking outputs: (-2^(31), 2^(31)-1)

  std::cout << "size of float: " << sizeof(float) << std::endl;
  // float is type of variable numbers in decimal format with digits
  // ex: 10.01, but float takes the format of 10.010000(we can limit it, idk how to do it in cpp)
  //its range : (-2^(31), 2^(31)-1)

  std::cout << "size of double: " << sizeof(double) << std::endl;
  // double extend of float, it is less used in my programming journey.

  return 0;
}