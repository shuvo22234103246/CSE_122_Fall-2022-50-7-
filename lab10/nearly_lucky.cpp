#include<iostream>
using namespace std;
int main()
{

    char a[1000];
    int d ,c = 0,i;
   cin>>a;
    d = sizeof(a);

for(i = 0;a[i]!='\0';i++)
{
    if((a[i] == '4')||(a[i] == '7'))
    {
        c = c+1;
    }
}




if(c == 4 || c == 7) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

    return 0;
}

