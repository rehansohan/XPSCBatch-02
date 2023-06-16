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
  int mi=INT_MAX;
  for(int i=0;i<a;i++)
  {
   cin>>v[i];
   mi=min(mi,v[i]);
  }
  for(int i=0;i<a;i++)
{
   v[i]=v[i]-mi;
  }
  int s=0;
  for(int i=0;i<a;i++)
  {
  s+=v[i];

  }
  cout<<s<<endl;
}

}
