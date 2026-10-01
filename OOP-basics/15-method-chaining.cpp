#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

class Rectangle
{
private:
  int length, width;
  string color;
public:
  Rectangle& print()
  {
    cout << "Length: " << length << endl
         << "Width: " << width << endl
         << "Color: " << color << endl;
    return *this;
  }

  Rectangle(int _length, int _width, string _color): length(_length), width(_width), color(_color){}

  Rectangle& setColor(const string color)
  {
    this->color = color;
    return *this;
  }

  Rectangle& setLength(const int& length)
  {
    this->length = length;
    return *this;
  }

  Rectangle& setWidth(const int& width)
  {
    this->width = width;
    return *this;
  }
};

int main(void)
{
  Rectangle rectangle(10, 5, "Blue");

  rectangle.print().setColor("Pink").print();
  return 0;
}