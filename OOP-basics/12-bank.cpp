#include <iostream>

// We will do a basic project on bank, methods having like deposit and withdraw

using std::cout;
using std::cin;
using std::endl;

class Bank
{
  private:
    double balance = 0;
  
  public:

  void deposit(double amount) // y'k we can't simple deposit -5000 ><
  {
    if(amount > 0)
    {
      balance += amount;
    }
    else
    {
      cout << "Invalid Entry Try Again!" << endl;
    }
  }

  void withdraw(double amount)
  {
    if(amount <= balance)
    {
      balance -= amount;
    }
    else
    {
      cout << "Exceeded amount! PLease Try again" << endl;
    }
  }

  double getAmount()
  {
    return balance;
  }
};

int main(void)
{
  int op;
  double amount, balance_amount;

  Bank *client = new Bank;

  cout << "<----------->Welcome to the Zang Bank ^^<--------------->" << endl;

while(op != 4)
{
  cout << "Enter option" << endl
       << "1. Deposit" << endl
       << "2. Withdraw" << endl
       << "3. Check Balance" << endl
       << "4. Exit" << endl
       << "\n";

  cout << "Enter Option: ";
  cin >> op;

  switch(op)
  {
    case 1:
      cout << "Enter amount(to deposit): " << endl;
      cin >> amount;
      client->deposit(amount);
      break;

    case 2:
      cout << "Enter amount(to withdraw): " << endl;
      cin >> amount;
      client->withdraw(amount);
      break;

    case 3:
      balance_amount = client->getAmount();
      cout << "Balance: " << balance_amount << endl
      << "\n";
      break;

    default:
      cout << "Error: Try again" << endl;
      break;
  }
}

  cout << "Thank You for visiting our bank ^^" << endl;
  return 0;
}