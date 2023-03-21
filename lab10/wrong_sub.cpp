#include<iostream>
using namespace std;
int main()
{
    long int n,k ,res = 0,num = 0;
cin>>num>>k;
for(int i = 1;i<=k;i++)
{

  if(num%10 != 0)
    {
        num = num - 1;
    }
    else if(num%10 == 0)
    {
      num = num/10;
    }
}

cout<<num;
    return 0;
}
