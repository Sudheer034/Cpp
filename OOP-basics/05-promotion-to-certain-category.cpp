#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Employee
{
  void PayRaise()
  {
    cout << "You have been by \'5%\' of income" << endl;
  }
};

struct Engineer : Employee
{
  void PayRaise() // for this class, it has been overriden
  {
    cout << "You have been by \'10%\' of income" << endl;
  }
};

int main(void)
{
  Employee *person = new Engineer(); 
  
  // we create an object, that should've been point to Engineer 
  //struct, but instead takes base datatyoe as their base

  // to resolve this we got virtual function pointers

  person->PayRaise(); // it outputs %5 in increase, but it should've 10%

  return 0;
}