#include<bits/stdc++.h>
using namespace std;
int main()
{


long long int k,n,w,res =0;
cin>>k>>n>>w;
for(int i=1;i<=w;i++)
{
   res = res+(3*i);

}
int output = res - n;
cout<<output;
return 0;
}

