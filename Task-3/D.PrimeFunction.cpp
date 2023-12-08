#include <iostream>
#include <math.h>
using namespace std;
bool check_prime(int num)
{
   int newNumber = sqrt(num);
   int check = 0;
   for (int i = 2; i <= newNumber; i++)
   {
      if (num % i == 0)
      {
         check = 1;
         break;
      }
   }

   return check;
}
int main()
{
   int n;
   cin >> n;
   while (n--)
   {
      int num;
      cin >> num;
      if (num == 1)
      {
         cout << "NO" << endl;
         continue;
      }
      if (check_prime(num) == 1)
      {
         cout << "NO" << endl;
      }
      else
      {
         cout << "YES" << endl;
      }
   }
}
