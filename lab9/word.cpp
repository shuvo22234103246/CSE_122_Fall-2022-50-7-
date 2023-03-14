#include<bits/stdc++.h>
using namespace std;
int main()
{
 string  s;
 int coun=0,coun1 =0;
 cin>>s;
 for(int i =0;i<s.size();i++)
 {
   if(isupper(s[i])) coun++;

   else coun1++;
 }
 if(coun<coun1){
          for(int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;

 }


if(coun1<coun)
{



        for(int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
}
if(coun == coun1)
{
     for(int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;


}


  return 0;
}
