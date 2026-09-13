#include<bits/stdc++.h>
using namespace std;
#define el "\n"
#define sp " "
#define ll long long
class BankAccount
{
  private:
    string name;
    int accountNo , balance;
    char accountType;
  public:
    BankAccount(string n , int aN, int b, char aT)
    {
      name = n;
      accountNo = aN;
      balance = b;
      accountType = aT;
    }  
    void changeinfo();
    void show();
    int outBalance();
    int modifyBalance();
    int operator += (int x)
    {
      balance += x;
      return balance;
    }  
    int operator -= (int x)
    {
      balance -= x;
      return balance;
    }   
};
int BankAccount :: modifyBalance()
{
  cout << "1.add " << sp << "2.withdraw"<<el;
  int o; cin >> o;
  int amount;
  if(o == 1)
  {
    cout << "enter the ammount you want to add : ";
    cin >> amount;
    balance += amount;
    cout << "Balance = " << balance << el;
  }
  else if(o == 2)
  {
    cout << "enter the ammount you want to withdraw : ";
    cin >> amount;
    if(balance < amount){cout << "Not enough" << el;}
    else 
    {
      balance -= amount;
      cout << "Balance = " << balance << el;
    }
  }
}
int BankAccount :: outBalance()
{
 return balance;
}
void BankAccount :: changeinfo()
{
  cout << "Which information you want to change:" << el;;
  cout << "1. name " << sp << "2.account type " << sp << "3.both" << el;
  int x; cin >> x;
  if (x == 1)
  {
    string s;
    cout << "Enter new name : ";
    cin >> s;
    name = s;
  }
  else if (x == 2)
  {
    char s;
    cout << "Enter new type : "<<el;
    cout << "Enter 's' for saving account  or 'c' for current account : ";
    cin >> s;
    accountType = s;
  }
  else if (x == 3)
  {
    string s;
    cout << "Enter new name : ";
    cin >> s;
    name = s;
    char c;
    cout << "Enter new type : "<<el;
    cout << "Enter 's' for saving account  or 'c' for current account : ";
    cin >> c;
    accountType = c;
  }
}
void BankAccount :: show()
{
  cout << "Name : " << name << el;
  cout << "Account number : " << accountNo << el;
  cout << "Account type : " << accountType << el;
  cout << "balance : " << balance << el;
}

int main()
{
  string name;
  int accountNo , balance;
  char accountType;
  cout << "  CREATE AN ACCOUNT " << el;
  cout << "Enter Name: ";
  cin >> name;
  cout << "Enter account number: ";
  cin >> accountNo;
  cout << "Enter balnce: ";
  cin >> balance;
  cout << "Enter account type: " << sp;
  cout << "Enter 's' for saving account  or 'c' for current account : ";
  cin >> accountType;
  BankAccount ob(name , accountNo , balance , accountType);
  cout << "1. modify balance" << el;
  cout << "2. account report" << el;
  cout << "3. change informations" << el;
  int n; cin >> n;
  if(n == 1)
  {
    ob.modifyBalance();
  }
  else if(n == 2)
  {
    ob.show();
  }
  else if(n == 3)
  {
    ob.changeinfo(); 
    ob.show();
  }
  return 0;
}
