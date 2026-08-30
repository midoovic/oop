#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
class BankAccount
{
 private:
  string name , id;
  int accNum;
  ll balance = 750;
 public:
  BankAccount() //defult constructor
  {
    cout << "Name "; cin >> name;
    cout << "Id "; cin >> id;
    cout << "account number "; cin >> accNum;
  }
  void setval()
  {
    cout << "Name "; cin >> name;
    cout << "Id "; cin >> id;
    cout << "account number "; cin >> accNum;
  }
  ll newbalance(string o , ll amount)
  {
    if (o == "add")
    {
      balance += amount;
      return balance;
    }
  
   else if(o == "withdraw")
   {
    if(balance >= amount)
    {
      balance -= amount;
      return balance;
    }
    else
    {
      return -1;
    }
   }
   else if(o == "show current balance")
   {
     return balance;
   }
  }
};
int main()
{
  BankAccount bank; // ==> taking inputs directly by construstor
  //bank.setval();      // taking input directly in function 
  string s ; ll balance =  0;
  cout << "Operation:" << el;
  cout <<"1. Add" << el << "2. Withdraw" << el <<"3. show current balance" << el;
  int n; cin >> n;
  if(n == 1) s = "add" , cout << "Amount you want to add : ", cin >> balance;
  else if(n == 2) s = "withdraw", cout << "Amount you want to take : ", cin >> balance;
  else if(n == 3) s = "show current balance";
  cout << "Your balance is : " << bank.newbalance(s , balance) << el;
  if(bank.newbalance(s , balance) == -1) cout << "not enough";
  return 0;
}