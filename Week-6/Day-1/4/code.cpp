#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int a,b,c;
  cin>>a>>b>>c;
  vector<int>v;
  int flag=0;
  int f=0;

  while(a--)
  {
   int x,y;
   cin>>x>>y;
   if(y==c)
   {

    v.push_back(x);
    flag=1;
    f++;
   }
  }
  long long int s=0;
  if(flag==0||f<b)
   cout<<"-1"<<endl;
  else
  {
   sort(v.rbegin(),v.rend());
   for(int i=0;i<b;i++)
   {
   s+=v[i];
   }
   cout<<s<<endl;
  }
 }
}
