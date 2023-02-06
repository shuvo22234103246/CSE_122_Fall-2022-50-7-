
#include<iostream>
using namespace std;
int main()
{
int i = 0;
string ch;
getline(cin,ch);


if(ch[i]>='a' && ch[i]<='z')
{
ch[i]= ch[i]-32;
cout <<ch;
}
else cout  << ch;






return 0;
}
