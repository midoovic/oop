#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
class rectangle
{
 private:
  int l , w;
 public:
  void setval(int n , int m)
  {
    l = n , w = m;
  }
  int area()
  {
    return l * w;
  }
  void print()
  {cout << area() << el;}
};
int main()
{
  int n , m; cin >> n >> m;
  rectangle rec;
  rec.setval(n , m);
  rec.area();
  rec.print();
  return 0;
}