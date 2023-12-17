#include <iostream>
using namespace std;
long long input;
bool reachValue(long long num)
{
   if (input < num)
   {
      return false;
   }
   else if (input == num)
   {
      return true;
   }
   else
   {
      return reachValue(num * 10) || reachValue(num * 20);
   }
}
int main()
{
   long long tests;
   cin >> tests;
   while (tests--)
   {
      cin >> input;
      if (reachValue(1))
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
}
