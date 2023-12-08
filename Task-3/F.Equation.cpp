#include <iostream>
using namespace std;

long long equation(int num1, int num2)
{
   long long sum = 0;
   int numsqr = num1*num1; // The difference between each sum is x^2 so that I save this value to multiple it with the previous value of power_result
   long long power_result = 1;

   for (int i = 2; i <= num2; i += 2)
   {
         power_result *= numsqr;
         sum += power_result;
   }

   return sum;
}
int main()
{
   int num1 ,num2;
   cin >> num1 >> num2;
   cout << equation(num1, num2);

   return 0;
}
