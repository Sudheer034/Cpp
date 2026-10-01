#include <iostream>

using std::endl;
using std::cout;
using std::cin;

template<typename type, int length>

class Array
{
  private:
    int A[length];
    int size = 0;
    int newLength;
  public:
    void fill(type data)
    {
      for(int i = 0; i < length; i++)
        A[i] = data;
    }

    int& getSize()
    {
      for(int i = 0; i < length; i++)
        size++;
      return size;
    }
    type& at(int pos)
    {
      return A[pos];
    }

    void print()
    {
      for(int i = 0; i < length; i++)
      {
        cout << A[i] << endl;
      }
    }
};

int main(void)
{
  Array<int, 4> list;

  list.fill(5);

  list.at(2) = 8;

  int pos = list.at(2);

  cout << "at 2: " << pos << endl;
  list.print();

  cout << "Size: " << list.getSize() << endl;
  return 0;
}