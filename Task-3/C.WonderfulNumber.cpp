#include <iostream>
using namespace std;

void allNumbers(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (i != 1)
        {
            cout << " ";
        }
        cout << i;
    }
}
#include <iostream>
using namespace std;
bool check_Num_Type(int num)
{
    if (num % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
bool check_Bin_Palindrome(int num)
{
    bool check = 0;
    int i = 0;
    int binarry[32];
    while (num > 0)
    {
        binarry[i] = num % 2;
        num /= 2;
        i++;
    }
    for (int j = 0; j <= (i - 1) / 2; j++)
    {
        if (binarry[j] == binarry[i - 1 - j])
        {
            check = 1;
        }
        else
        {
            check = 0;
            break;
        }
    }

    return check;
}
int main()
{
    int num;
    cin >> num;
    if (check_Bin_Palindrome(num) == 1 && check_Num_Type(num) == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

int main()
{

    int num;
    cin >> num;

    allNumbers(num);

    return 0;
}
