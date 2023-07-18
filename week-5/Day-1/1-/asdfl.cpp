
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string s;
  cin>>s;
  if((s.back()-'0')%2==0)
  {
   cout<<"0"<<endl;
   continue;
  }
  else if((s[0]-'0')%2==0)
  {
   cout<<"1"<<endl;continue;

  }
  int c2=count(s.begin(),s.end(),'2');
  int  c4=count(s.begin(),s.end(),'4');
  int c6=count(s.begin(),s.end(),'6');
  int c8=count(s.begin(),s.end(),'8');
if(c2>0||c4>0||c6>>0||c8>>0)
  {
   cout<<"2"<<endl;continue;
  }
  else
  {
   cout<<"-1"<<endl;
  }
 }
}
 
