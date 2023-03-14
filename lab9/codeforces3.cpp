#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n;
cin>>n;
if(n == 1||n ==2||n==3||n==4||n==5)cout<<1;
else
{
  if(n%5==0)cout<<n/5;
  else cout<<(n/5)+1;

}







  return 0;
}
