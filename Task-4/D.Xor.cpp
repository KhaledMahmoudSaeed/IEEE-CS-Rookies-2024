#include <iostream>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, q;
    cin >> a >> b >> q;
    long long res = q % 3;
    if (res == 1)
    {
        cout << a;
    }
    else if (res == 2)
    {
        cout << b;
    }
    else
    {
        cout << (a ^ b) << endl;
    }
}

/* I think that problem want to get all values till q reaches 2 :(
int fun (int a, int b,int q){
   int num1=0;
   int num2=0;
   int num3=0;
if (q<=2){
if (q==1){
   num1=a;
}
else if (q==2){
   num2=b;
}
return num3=num1^num2;
}
   else {
   return fun(a,b,q-1)^fun(a,b,q-2);
   }
}
int main(){
int a,b,q;
cin>>a>>b>>q;
if(q==1){
   cout<<a;
}
else if(q==2){
   cout<<b;
}
else {
cout<<fun(a,b,q);
}
return 0;
}
*/
