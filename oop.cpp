#include<bits/stdc++.h>
using namespace std;
#define el "\n"
#define sp " "
#define ll long long
#define allr(v) v.rbegin() , v.rend()
class Student 
{
   private:
     string name;
     int mark;
   public:
     Student() //defult constructor
     {
        cout << "Enter the name : " << el;
        cin >> name;
        cout << "Enter mark : "<<el;
        cin >> mark;
     }
     Student(string n , int m) // parametrize constructor
     {
       name = n;
       mark = m;
     }
     friend int sum(Student a , Student b , Student c); //friend function
     void checkMarks(Student a , Student b , Student c); //prototype function
     void out() // defult function
     {
       cout << name << sp << mark << el;
     }
};

int sum(Student a , Student b , Student c)  //frend function's body
{
   return a.mark + b.mark + c.mark;
}
void Student :: checkMarks(Student a , Student b , Student c) //prototype function's body
{
   string win;
   vector<int> arr(3);
   arr[0] = a.mark;
   arr[1] = b.mark;
   arr[2] = c.mark;
   if(a.mark == b.mark && a.mark == c.mark)
   {
      cout << "all marks are equal" << el;
      return;
   }
   sort(allr(arr));
   if(arr[0] == a.mark) win = a.name;
   else if(arr[0] == b.mark) win = b.name;
   else if(arr[0] == c.mark) win = c.name;
   cout << "congratulations " << win << el;
}

int main()
{
   Student ahmed("Ahmed" , 100);
   Student ali("Ali" , 50);
   Student nour("Nour" , 70);
   cout << "sum of marks =" << sp << sum(ahmed , ali , nour) << el;
   ahmed.checkMarks(ahmed , ali , nour);

   Student s;
   s.out();

   return 0;
}