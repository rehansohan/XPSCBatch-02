#include <iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
 cin>>v[i];
}
int t;
cin>>t;
int sum=0;
for(int i=1;i<=t;i++)
{
 int a,b;
 cin>>a>>b;
 for(int j=a;j<=b;j++)
 {
  sum+=v[j];
 }
 cout<<sum<<endl;
sum=0;
}
}
