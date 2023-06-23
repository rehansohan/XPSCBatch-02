#include<bits/stdc++.h>
using namespace std;
int main()
{
 int  t;
 cin>>t;
vector<int>v(t);
map<int,int>mp;
for(int i=0;i<t;i++)
{
 cin>>v[i];
 mp[v[i]]++;
}

for(int i=0;i<t;i++)
{
 if(mp[v[i]]==1)
 {
  cout<<v[i]<<endl;
 }
}


}
