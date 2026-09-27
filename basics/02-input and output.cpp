#include <iostream>

int main(void)
{
  int a = 6;

  std::cout << "The number a: " << a << std::endl; //ig it kinda looks like Java

  std::cout << "Enter a num to change 'a': ";
  std::cin >> a;

  std::cout << "The number a: " << a << std::endl;

  return 0;
}