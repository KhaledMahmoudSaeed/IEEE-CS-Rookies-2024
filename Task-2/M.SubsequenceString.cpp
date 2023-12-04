#include <iostream>
#include <string>

using namespace std;
int main()
{
    string hello ("hello");
    string in_text;
    string temp;
    int len, j = 0;
    cin >> in_text;
    len = in_text.length();
    for (int i = 0; i < len; i++)
    {
        if (in_text[i] == hello[j])
        {
            j++;
            temp.push_back(in_text[i]);// function push_back uesed to append characters at the end of the current string
        }
    }

    if (temp == hello)
    {

        cout << "YES";
    }
    else if (temp != hello)
    {
        cout << "NO";
    }

    return 0;
}
