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
  int s=v.size();
  if(s<=2)
  {
   if(v[0]==v[1]+1||v[1]==v[0]+1)
   cout<<"2"<<endl;
   else
    cout<<"1"<<endl;
  }
  else
  {
  cout<<"2"<<endl;
  }


 }
}
