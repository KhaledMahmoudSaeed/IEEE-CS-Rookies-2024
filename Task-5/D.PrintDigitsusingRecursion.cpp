#include <iostream>
using namespace std;
int index = 0; // 2
void print(string num)
{

   if (index == num.size())
   {
      return;
   }

   cout << num[index] << " ";
   index++;
   return print(num);
}
int main()
{
   int testCase;
   cin >> testCase;
   while (testCase--)
   {
      string num;
      cin >> num;
      print(num);
      cout << endl;
      index = 0;
   }
}
