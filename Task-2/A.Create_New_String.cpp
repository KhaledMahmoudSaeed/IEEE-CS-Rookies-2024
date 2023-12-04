#include <iostream>
#include <string>

using namespace std;
int main()
{
   string txt1, txt2;
   cin >> txt1 >> txt2;
   int length_Txt1 = txt1.length();
   int length_Txt2 = txt2.length();
   cout << length_Txt1 << " " << length_Txt2 << endl;
   cout << txt1 << " " << txt2;

   return 0;
}
