#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

 int n;
 cin>>n;
 vector<int>v;
 if(n==3)
  cout<<"-1";
 else
 {
  for(int i=0;i<n;i++)
  {
   v.push_back(n-i);
  }
 }
 int st=v.size();
 int k=st/2;
 if(st%2==0)
 {
  for(auto u:v)cout<<u<<" ";

 }
 else
 {
  for(int i=0;i<=k;i++)
  {
   swap(v[i],v[i+1]);
   i++;
  }
  for(auto u:v)cout<<u<<" ";

 }
 cout<<endl;




    }
    return 0;
}
