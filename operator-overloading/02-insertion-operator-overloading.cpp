#include <iostream>
#include <string>
// Well Well Well, we got option, how the file outputs, when we print the class or struct!
// this is really cool thing to do i think
// Let's try it out!

using std::cout;
using std::cin;
using std::endl;

using std::string;

using std::ostream; // ostream = output stream, you can think of it like stdout in C

class Vertex
{
friend ostream& operator<<(ostream& out, Vertex& point);

private:
  int x, y, z;
public:
  Vertex(int _x, int _y, int _z): x(_x), y(_y), z(_z) {}
};

ostream& operator<<(ostream& out, Vertex& point)
//  |                   |
//  |                   |
//  |                   +---> we are taking cout through it, tbh im not that good these topics, but i 
//  |                         tried +_+
//  +---> this is standard output, maybe i think i can give file tpp
{
  out << "(" << point.x << "," << point.y << "," << point.z << ")" << endl; // we are making the terminal to output as (x,y,z)
  return out;
}

int main()
{
  Vertex point1(1,2,3);

  cout << point1; // we are printing the class!
  // output: (1,2,3)
  return 0;
}