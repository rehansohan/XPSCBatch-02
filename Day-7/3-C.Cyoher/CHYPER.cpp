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
 vector<int>v(n);
 vector<int>v1;
 for(int i=0;i<n;i++)
 {
  cin>>v[i];
 }
 int a;
 string s;

 for(int i=0;i<n;i++)
 {
  cin>>a>>s;
for(int j=0;j<a;j++)
{
if(s[j]=='D')
{
if(v[i]==9)
{
 v[i]=0;
}
else
 v[i]++;
}
else
{
if(v[i]==0)
{
 v[i]=9;
}
else
 v[i]--;
}
}
v1.push_back(v[i]);

 }
 for(auto u:v1)
 {
  cout<<u<<" ";
 }

}



return 0;
}
