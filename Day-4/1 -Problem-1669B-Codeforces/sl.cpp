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
  vector<int>v(a);
  for(int i=0;i<a;i++)
  {
   cin>>v[i];
  }
  map<int ,int >mp;
  int mx =0;
  for(auto u:v)
  {
   mp[u]++;
  }
  for(auto u:mp)
  {
   if(u.second>=3)
   {
    mx=max(mx,u.first);
   }
  }
  if(mx!=0)
  {
   cout<<mx<<endl;
  }
  else
   cout<<"-1"<<endl;
}

}
