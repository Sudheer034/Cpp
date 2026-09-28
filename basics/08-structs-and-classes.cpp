#include <iostream>

using std::cout;
using std::cin;
using std::endl;

typedef struct Struct // we defined a struct!
{
  int data = 5; // wait what!, we can set values inside a STRUCT!!
}Structs;

class Class // we defined a class!
{
  private: // class defaultly starts as private.
  public:
    int data = 5; // we can set values into the class!
};

int main()
{
  Structs status;
  cout << status.data << endl;
  return 0;
}