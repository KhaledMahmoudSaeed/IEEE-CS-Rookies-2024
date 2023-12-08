#include <iostream>
using namespace std;

void allNumbers(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (i != 1)
        {
            cout << " ";// codeforces wants that ^_^ (Trailing spaces refer to spaces that occur at the end of a line or string)
        }
        cout << i;
    }
}
int main()
{

    int num;
    cin >> num;

    allNumbers(num);

    return 0;
}
