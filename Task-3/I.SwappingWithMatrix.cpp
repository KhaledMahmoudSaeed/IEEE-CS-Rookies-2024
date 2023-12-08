#include <bits/stdc++.h>
using namespace std;

const int s = 500;
void swap_matrix_rows(int a[s][s], int x, int y, int size_of_arry)
{
   for (int i = 0; i < size_of_arry; i++)
   {
      int temp = a[x][i];
      a[x][i] = a[y][i];
      a[y][i] = temp;
   }
}
void swap_matrix_colums(int a[s][s], int x, int y, int size_of_arry)
{

   for (int i = 0; i < size_of_arry; i++)
   {
      int temp = a[i][x];
      a[i][x] = a[i][y];
      a[i][y] = temp;
   }
}
void new_matrix(int a[s][s], int x, int y, int size_of_arry)
{
   swap_matrix_rows(a, x, y, size_of_arry);
   swap_matrix_colums(a, x, y, size_of_arry);
   for (int i = 0; i < size_of_arry; i++)
   {
      for (int j = 0; j < size_of_arry; j++)
      {
         cout << a[i][j] << " ";
      }
      cout << endl;
   }
}
int main()
{
   int size_of_arry, x, y;
   cin >> size_of_arry >> x >> y;
   int arry[s][s];
   for (int i = 0; i < size_of_arry; i++)
   {
      for (int j = 0; j < size_of_arry; j++)
      {
         cin >> arry[i][j];
      }
   }
   x--;
   y--;
   new_matrix(arry, x, y, size_of_arry);
   return 0;
}
