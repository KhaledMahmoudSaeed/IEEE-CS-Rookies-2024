#include <iostream>

using namespace std;
int main()
{
   string txt;
   int temp = 0;
   cin >> txt;
   int len = txt.length();
   for (int i = 0; i < len; i++)
   {
      temp = txt[i];
      if (temp >= 97)//small letters have ASCII code from 97 to 122
      {
         temp = temp - 32;// The difference between letter's case as ASCII code  is 32
         txt[i] = temp;
      }
      else if (temp >= 65 && temp <= 90)
      {
         temp = temp + 32;
         txt[i] = temp;
      }
      else if (temp == 32)
      {
         temp = 44;// ASCII Code for ,
         txt[i] = temp;
      }
      else if (temp == 44)
      {
         temp = 32;// ASCII code for space " "
         txt[i] = temp;
      }
   }
   cout << txt;

   return 0;
}
