#include <iostream>

// Let's Go OPERATOR OVERLOADING

// overloading here means, cpp can create create multiple functions with the same name.
// it is allowed in cpp, because of name mangling
// ex: void print(int value); 
// void print(int value, int data); 
// void print(string name, int age);

// This is Allowed in CPP

// in classes, we can't usually use opertors with them right like
// ex: a, b are objects of classes, and i want to perform a+b
// the compiler will throw an error.

// operator overloading is we can make custom functions if they use the operator

// Let's Begin

using std::cout;
using std::cin;
using std::endl;

class Number
{
private:
  int x;
public:
  Number(int _x): x(_x){}

  Number operator+(Number& a) // we created an operator class!, this only take one parameter
  //                  |
  //                  +---> before '+' the compiler checks, there is another class, if it is it will compile
  {
    return Number(this->x + a.x); 
  }

  void print()
  {
    cout << "Data: " << this->x << endl;
  }
};

int main(void)
{
  Number a(5);
  a.print(); // it outputs: 5
  Number b(10);
  b.print(); // it outputs: 10

  Number c = a + b; // you might wonder, why i didn't use constructor for c, well actually i got the same doubt.
  // in compile time, this roughly becomes Number c(this_a+b)
  
  c.print(); // it outputs: 15
  return 0;
}