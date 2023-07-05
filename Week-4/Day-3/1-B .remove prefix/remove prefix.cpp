#include<bits/stdc++.h>
#include<set>
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

  for(int i=0;i<n;i++)
  {
   cin>>v[i];

  }
  int flag=0;
  int k;
set<int>st;
 for(int i=n-1;i>=0;i--)
 {
  if(st.count(v[i]))
  {
   flag=1;
   k=i+1;
   break;
  }
  st.insert(v[i]);

  }

if(flag==1)
{
 cout<<k<<endl;
}
else
 cout<<"0"<<endl;

}
}

