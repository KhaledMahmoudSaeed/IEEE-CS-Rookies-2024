#include <iostream>
#include <iomanip>
using namespace std;
double arr[100];
int size;

double av(int index, double res)
{

   if (size == index)
   {
      return res / size;
   }
   return av(index + 1, res + arr[index]);
}
int main()
{
   cin >> size;
   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
   cout << fixed << setprecision(6) << av(0, 0);
}
// you should run this problem in GNU C++14
