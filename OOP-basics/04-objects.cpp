#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

struct Employee
{
  string name;
  long int ID;
  bool active;
};

int main(void)
{
  Employee *person = new Employee(); 
  // An object is created, though it is an pointer to the employee 
  //class as base and it is pointing to Employee class 

  cout << "Enter name: " << endl;

  cin >> person->name;

  cout << "Enter ID: " << endl;
  
  cin >> person->ID;

  cout << "Are you active: " << endl;

  cin >> person->active;

  cout << "Name: " << person->name << endl
      << "ID: " << person->ID << endl
      << "ACTIVE: " << person->active << endl;


  delete person;

  person = nullptr;

  return 0;
}