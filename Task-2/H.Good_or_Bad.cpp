#include <iostream>
#include <string>

using namespace std;
int main()
{
   int num_test, temp;
   string txt;
   cin >> num_test;
   int arr[num_test] = {0};
   temp = num_test;
   while (num_test)
   {
      cin >> txt;
      /*function found implement when you enter what are you searching
      about and the begin's index and size of string that you are searching about */
      size_t found1 = txt.find("010", 0, 3);
      size_t found2 = txt.find("101", 0, 3);
      if (found1 != string::npos || found2 != string::npos)// string::npos called when function find nothing
      {
         arr[num_test - 1]++;
      }
      num_test--;
   };

   for (int i = temp - 1; i >= 0; i--)
   {
      if (arr[i] == 1)
      {
         cout << "Good" << endl;
      }
      else
         cout << "Bad" << endl;
   }

   return 0;
}
