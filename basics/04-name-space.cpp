#include <iostream>
#include <string>

/*
namespaces are like modules from other languages,
but cpp has multiple ways to include from one file to another.
like #include from local file system, or merging those two files during compilation (this all i know lol)

"to avoid naming conflicts, we use namespaces"
*/

using String = std::string; //"using" here works like typedef in C!!
// "using" also works import for namespaces.

namespace Hello // we created a namespace NICE!!
{
  void printHello(String name) // we created a method for this name space.
  {
    std::cout << "Hello " << name << std::endl;
  }
}

int main(void)
{
  Hello::printHello("Sudheer");
  return 0;
}