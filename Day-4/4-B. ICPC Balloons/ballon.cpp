#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int sum=0;

 while(n--)
 {
  int t;
  cin>>t;
 int fre[26]={0};
  char s[t];
  for(int i=0;i<t;i++)
  {
   cin>>s[i];
   fre[s[i]-'A']++;

  }

for(int i=0;i<26;i++)
{
 if(fre[i]>0){
 for(int j=1;j<=fre[i];j++)
 {
  if(j==1)
  {
   sum+=2;
  }
  else
  {
   sum+=1;
  }
 }
 }
}
cout<<sum<<endl;
sum=0;

 }
}
