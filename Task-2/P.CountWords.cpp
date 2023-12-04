#include <iostream>
#include <string>
using namespace std;
int main()
{

    string txt;
    int ascii;
    int dotnum = 0;
    int counter = 0;
    getline(cin, txt);
    int len = txt.length();
    for (int i = 0; i < len; i++)
    {
        ascii = txt[i];
        if (ascii == 46)// ASCII Code for dot ,
        {
            dotnum++;
            continue;
        }
        else if (ascii == 32)
        {
            counter++;
        }
    }
    cout << ((counter + 1) - (dotnum / 3));

    return 0;
}
