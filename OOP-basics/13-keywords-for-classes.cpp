#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// probably this is the last OOP-basic concepts i will cover ^^
// so it is about keywords hmm hmm
// Lets get it started!

// we'll discuss about private, protected, and public keyword and "this"

// private keyword creates a private scope inside the class section, only the class members can access it, and inherited and outside the classes cannot be accessed.

// protected keyword creates a proctected inside the class section, only class members and inherited once can access it, but main or outside the class cannot be accessed

// public keyword creates a public section inside the class section, where all class members, inherited, outside the class can be accessed

// "this"

class KeyWords
{
  private:
    int private_value = 9;
  protected:
    int protected_value = 14;
  public:
    int public_value = 12;
};

class Inherited : protected KeyWords{};

class This
{
private:
  int num;
public:
  This& EnterNum(int n) // this keyword is used, when user wants to assign to its members data directly
  // without defining like This::num = n; we use this->num = n;
  // note: this is a pointer to this Class
  {
    cout << "Num " << n << " has entered" << endl;
    this->num = n;
    return *this;
  }
};

int main(void)
{
  KeyWords Key;
  Inherited value;

  cout << "Private Value: \n" // Key.private_value << endl // it is private so it cannot be accessed
       << "Protected Value: \n" // Key.protected_value << endl // it is same case as private
       << "Public Value: " << Key.public_value << endl;

  This thisi;
  thisi.EnterNum(5);
  return 0;
}