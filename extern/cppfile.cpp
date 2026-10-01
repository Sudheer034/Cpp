#include <iostream>

// We can compile C files with Cpp files using extern "C" !
// normally we cannot compile c files with cpp files due to name mangling

// C++ creates functions with some characters attached to it, it is due to for overloading.
// C doesn't support name mangling, thats why they won't get compiled together!
// we can solve it using extern "C"

extern "C"
{
  #include "cheader.h"
}

using namespace std;

int main(void)
{
  func(); // well my terminal failed ;-;
  return 0;
}