#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

void C_style_char()
  {
    char Character; // C-style character.

    cout << "Enter a character or a symbol" << endl;

    cin >> Character;

    cout << Character << endl;
  }

void C_style_string()
{
  char nameBuff[50];
  
  cout << "Enter your name ^^" << endl;

  cin >> nameBuff; // Note: It reads till spaces, to solve this we got fgets in C.

  cout << "Nice to meet you " << nameBuff << " ^^" << endl;
}

void C_style_stringPP()
{
  // to solve the we use a function called "getline(input, vairable);"
  char nameBuff[50];

  cout << "Enter your full name: " << endl;

  // std::getline(cin, nameBuff);, sadly i thought this get accepted, but maybe it accepts string like not C-Style

  // Let's try C-style!

  fgets(nameBuff, sizeof(nameBuff), stdin);

  // Note: we get '\n' at the end, we can rid off it using
  // strcspn method to search the char and returns its index,
  // syntax: nameBuff[strcspn(nameBuff, '\n')] = '\0';

  cout << "Your Full Name: " << nameBuff << endl;
}

void Cpp_style_string()
{
  string name;

  cout << "Enter your name: " << endl;

  std::getline(cin, name); // Cpp style

  cout << name << endl;

  // STRING CONCAT

  string t2a = "Hello ";
  string t2b = "World";

  cout << "t2a + t2b: " << t2a + t2b << endl; // C: strcat(str1, str2); [str1 saves the concated part]

  // t2a += t2b; // this is C-style strcat() ^^

  // STRING COMPARE
  // we got method for comparing strings called compare.
  // lets test it out

  int result = t2a.compare(t2b); // this is just difference of ASCII values of both.

  // the expression: t2a - t2b, returns an integer
  // if it results "-ve", then t2a string comes before t2b alphabetically
  // if it is "+ve" t2a comes after t2b alphabetically
  // if it results 0 both are equal strings
  
  cout << "The compared string: " << result << endl;

  // Compare is useful to sorting names

  // STRING COPY

  string copied = t2a; // it is straightword :)

  // in C, we had strcpy to copy, we can use string literals using pointers to solve, ultimately we gotta use strcpy for dynamic input copy.
  // C++ solved it, which is nice :)

  cout << "The Copied string: " << copied << endl;
}

int main()
{
  Cpp_style_string();
  return 0;
}