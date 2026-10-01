#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// friend keyword is used to have access on private, and protected section in a class,
// Note: friend is not a member of class.

class Revenue; // class prototype, for friend we gotta define it :)

class Investment
{
  friend void profit(Investment inv, Revenue rev); // we use friend keyword, to use private function inside theirs
private:
  void printData() // normally we cannot call this method by using its object, but friend function have access to this function!
  {
    cout << "Investment data: " << this->data << endl;
  }
public:
  int data;
  Investment(int cost)
  {
    data = cost;
  }
};

class Revenue
{
  friend void profit(Investment inv, Revenue rev);

private:
void printData()
{
  cout << "Revenue data: " << this->data << endl;
}
public:
  int data;
  Revenue(int rev)
  {
    data = rev;
  }
};

void profit(Investment inv, Revenue rev)
{
  if(inv.data > rev.data) cout << "You are in Loss boss" << endl;
  else cout << "Profit!" << endl;

  inv.printData(); // this is so cool to use private functions!
  rev.printData();
}

int main(void)
{
  Revenue rev(500);
  Investment inv(1000);

  profit(inv, rev);

  return 0;
}