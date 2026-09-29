#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct Animal
{
  virtual void MakeSound() 
  // created an virtual function pointer to refer here in virtual function table
  {
    cout << "You'll hear an sound" << endl;
  }
};

struct Dog : public Animal
{
  void MakeSound() override 
  // we overriding the function of MakeSound function
  {
    cout << "Woof!" << endl;
  }
};

int main(void)
{
  Animal *dog = new Dog;

  dog->MakeSound();
  
  return 0;
}