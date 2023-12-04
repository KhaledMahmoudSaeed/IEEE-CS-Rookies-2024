#include <iostream>

using namespace std;
int main()
{
    int type;
    string key("PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/");
    string original("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    string in_text;
    string solution;
    int h;
    int j = 0;
    cin >> type >> in_text;
    h = in_text.length();
    /* here we search an index of a specific character in one string
            depend on type and take it to find the opposite*/
    if (type == 1)
    {
        for (int i = 0; i < key.length(); i++)
        {
            if (in_text[j] == original[i] && j < h)
            {
                solution += key[i];
                j++;
                i = -1;// you will add 1 when loop begins so the index 0 won't be considered
            }
        }
    }
    else
    {
        for (int i = 0; i < key.length(); i++)
        {
            if (in_text[j] == key[i] && j < h)
            {
                solution += original[i];
                j++;
                i = -1;
            }
        }
    }

    cout << solution;

    return 0;
}
