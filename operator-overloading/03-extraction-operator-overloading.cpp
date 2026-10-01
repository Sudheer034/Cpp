#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

using std::istream;

class Person
{
friend istream& operator>>(istream& in, Person& person);
private:
  string name;
public:
  Person(string _name) : name(_name){}
  void print()
  {
    cout << "Name: " << name << endl;
  }
};

istream& operator>>(istream& in, Person& person)
{
  in >> person.name;
  return in;
}

int main(void)
{
  Person person("Zang");

  person.print();

  cin >> person;

  person.print();
  return 0;
}