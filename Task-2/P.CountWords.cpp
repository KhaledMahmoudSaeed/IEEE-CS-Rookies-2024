#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string txt,res;
	int counter = 0;
	getline(cin,txt);
	for(int i=0;i<txt.size();i++){
            // we are about check if this character is a letter or not to append it in new string to count it
		if(txt[i] != 32& txt[i] != '!' && txt[i] != '.' && txt[i] != '?' && txt[i] != ','){
			res+=txt[i];
		}
		if((txt[i] == 32 || txt[i] == '!' || txt[i] == '.' || txt[i] =='?' || txt[i] == ',' || i == txt.size() - 1)
		   && res.size() != 0){// her we check if the code faces any special character of that happened so this is the of word
			counter++;
			res = "";
		}
	}
	cout<<counter<<endl;
    return 0;
}
