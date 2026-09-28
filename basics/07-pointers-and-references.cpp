#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Pointer_and_reference_int()
{
  int a = 5;
  int* p = &a; // we declared a pointer!
  int& ref = a; // we declared a reference!

  cout << "Address of a: " << &a << endl;

  cout << "The value of pointer: " << p << endl
   << "The value of it is pointing to: " << *p << endl
   << "The address of pointer: " << &p << endl; // the address of 'a' where it is been pointed by pointer(note: it changes): 0x7ffd4498c574, the address of pointer is different.

  cout << "The value of referebce: " << ref << endl << "The addressn of reference: " << &ref << endl; // reference also has same address as the p, not its own 
}

void Pointer_and_reference_string()
{
  string str = "Hello";
  string *strP = &str; // i'm so shocked!
  // in C, it is just `char *strP = str;`
  string &strRef = str; // string reference 

  cout << "The value of pointer: " << strP << endl
   << "The value of it is pointing to: " << *strP << endl
   << "The address of pointer: " << &strP << endl;

  cout << "The value of referebce: " << strRef << endl << "The addressn of reference: " << &strRef << endl; // reference also has same address as the p, not its own 
}

void C_string_pointer()
{
  char name[] = "Zang";
  char *nameP = name;
  const char *nameSP = "Chug"; // string literal, means it is read-only, you cannot edit this string.
  // i got an error while compiling, ig its C++'s work, so it
  // accepts const char*, but yeah this is the same as const char* btw :)

  cout << "The value of pointer: " << nameP << endl // outputs: "Zang"
   << "The value of it is pointing to: " << *nameP << endl // outputs: 'Z', (Note: string is read by pointer arithematic)
   << "The address of pointer: " << &nameP << endl; // its pointer's address
}

// We use pointers work to save the data right?
// Ig we got new member into the family for it too, reference also works the same.
// lets test it out!

void FunctionRefTest(int& a)
{
  a = 5;
}

// reference increases the readability!

int main()
{
  int a; // a has certain address

  int &p = a; // p also has address that 'a' has
  int &c = p; // c also has address that 'p has that 'a' has

  cout << "The address of a: " << &a << endl
      << "The address of p: " << &p << endl
      << "The address of c: " << &c << endl;

  FunctionRefTest(a);
  cout << "The result of from the function: " << a << endl;
  return 0;
}