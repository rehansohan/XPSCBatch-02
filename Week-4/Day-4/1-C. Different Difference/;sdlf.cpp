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
  cout<<"-1"<<endl;
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
 else if(n==5)
 {
  swap(v[0],v[k]);
  for(auto u:v)cout<<u<<" ";
 }
 else
 {
  swap(v[k-1],v[k]);
  for(auto u:v)cout<<u<<" ";
 }




    }
    return 0;
}
