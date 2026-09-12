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

class Count
{
  private :
   int value;
  public:
   Count() : value (5){}
   //? function of type class
   Count operator +(Count c2) // result = c1 + c2
   {
     Count res;
     res.value = value + c2.value; // c1.val + c2.val
     return res;
   }
   void out()
   {
     cout << value;
   }
};
int main()
{
  Count c1 , c2 , result;
  result = c1 + c2;
  result.out();
}

/*
// friend class
class Student
{
  private:
    string name , id;
    int age , grade;
  public:
    Student()
    {
      cout << "name of student" << counter << "= ";
      cin >> name;
      cout << "age = ";
      cin >> age;
      cout << "grade of student"<<counter << "= ";
      cin >> grade;
      /*cout << "id = ";
      cin >> id;
      counter ++ ;
    }
    friend class Uni;
    friend double averageGrades(Student arr[] , int size);
};
// array of object
double averageGrades(Student arr[20] , int size)
{
  double avr = 0;
  for(int i = 0; i < size ; i++)
  {
    avr += arr[i].grade;
  }
  return avr / size;
}
class Uni
{
  private:
   string uni;
  public:
   Uni()
   {
     cout << "Uiversity : ";
     cin.ignore();
     getline(cin , uni);
   }
   void print (Student s)
   {
     cout << uni << el;
     cout << s.name << el;
     cout << s.age << el;
     cout << s.id << el;
     cout << s.grade << el;
   }
};

*/