#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 while(n--)
 {
  int a;
  cin>>a;
  string s1,s2;
  cin>>s1>>s2;
  int flag=0;
for(int i=0;i<a;i++)
{

  if(s1[i]=='R'&&s2[i]!='R'||s1[i]!='R'&&s2[i]=='R')
  {
   flag=1;
   break;
  }

}
if(flag==1)
 cout<<"NO"<<endl;
else
 cout<<"YES"<<endl;

 }

}
