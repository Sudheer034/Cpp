#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

    template <typename type> // we declared a template called type
//    |          |       |
//    |          |       +---> name of the type!
//    |          +--> this angular brackets takes 'N' # of types(ex: <typename one, typename two>) 
//    +--> Template is initialised with template keyword

// another keyword inside the template declaration 'class', template <class name>
// class here is different, it is not the class, as you know, but different it is same as typename
// maybe the creator thought, this comes in set of group thats why class keyword is used
// but i prefer typename keyword, because it is more intuitive

void print(type value)
//          |
//          +---------------> type declaration for any datatype(including classes) for value
{
  cout << value << endl;
}

int main(void)
{
  print<int>(5); // Explicit call
  print("Zang"); // Implicit call, while compile time its print<string>("Zang");

  return 0;
}