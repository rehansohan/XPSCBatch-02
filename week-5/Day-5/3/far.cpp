#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 vector<int>v(n);
 int x=0,y=0;
 for(int i=0;i<n;i++)
 {
  cin>>v[i];
  if(v[i]%2==0)
   x++;
  else
   y++;
 }
 if(x%2==0&&y%2==0||x%2==1&&y%2==0&&y>0)
  cout<<"YES"<<endl;
 else
  cout<<"NO"<<endl;

}

}
