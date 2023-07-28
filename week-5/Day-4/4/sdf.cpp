#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n;
  cin>>n;
  int s=2,k=1;
  vector<int>v;
  int sum1=0,sum2=0;
  for(int i=0;i<n/2;i++)
  {
sum1+=s;
   v.push_back(s);
   s+=2;
  }
    for(int i=n/2;i<n;i++)
  {
sum2+=k;
   v.push_back(k);
   k+=2;
  }
int f=abs(sum1-sum2);
v[n-1]=v[n-1]+f;
if(v[n-1]%2!=0)
{
 cout<<"YES"<<endl;
 for(auto u:v)cout<<u<<" ";
}
else
 cout<<"NO"<<endl;

 }
}
