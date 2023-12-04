#include <iostream>
#include <String>
using namespace std;
int main()
{
    int text_size;
    string txt, maxsubsquence;
    cin >> text_size >> txt;
    for (int i = 0; i < text_size; i++)
    {
        if (txt[i] != txt[i - 1])
        {
            maxsubsquence.push_back(txt[i]);
        }
    }
    cout << maxsubsquence.length() << endl;

    return 0;
}
