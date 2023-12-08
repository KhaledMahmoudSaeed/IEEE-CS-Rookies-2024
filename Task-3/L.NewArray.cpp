#include <iostream>
using namespace std;

void newarry(int *a, int *b, int size_of_arry)
{
   /* we are passing pointer of arry *a,*b instead of whole arry a,b because c++ doesn't allow it
   (C++ does not allow to pass an entire array as an argument to a function. However, You can pass a pointer to an array by specifying the
   array's name without an index.) */
   int arry[size_of_arry * 2] = {0};
   for (int i = 0; i < size_of_arry; i++)
   {
      arry[i] = b[i];
   }
   for (int i = size_of_arry; i < size_of_arry * 2; i++)
   {
      arry[i] = a[i - size_of_arry];
   }
   for (int i = 0; i < size_of_arry * 2; i++)
   {
      cout << arry[i] << " ";
   }
}
int main()
{
   int s;
   cin >> s; // Must enter size of arry before declare it
   int a[s], b[s];
   for (int i = 0; i < s; i++)
   {
      cin >> a[i];
   }
   for (int i = 0; i < s; i++)
   {
      cin >> b[i];
   }
   newarry(a, b, s);
   return 0;
}
