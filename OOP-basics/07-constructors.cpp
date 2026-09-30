#include <iostream>
#include <string>

// Let's Begin CONSTRUCTORS!

using std::cout;
using std::cin;
using std::endl;

using std::string;

struct Constructor
{
  string a;
  Constructor(string name, string state) : a(name), b(state) // we created an constructor
  {
    cout << "Constructor is Successful" << endl
         << "Name: " << a << endl
         << "State: " << b << endl;
  }
  string b;
};

int main(void)
{
  string name, state;

  cout << "Enter name for constructor" << endl;
  cin >> name;

  cout << "Enter state for constructor" << endl;
  cin >> state;

  Constructor c = Constructor(name, state);

  c.a;
  c.b;
  
  return 0;
}