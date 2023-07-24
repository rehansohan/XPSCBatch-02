
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
vector<int>v(n);
int c1=0,c2=0;
for(int i=0;i<n;i++)
{
 cin>>v[i];
 if(v[i]%2==0)
 {
  c1++;
 }else
 c2++;
}
if(c1<c2)cout<<c1<<endl;
else
 cout<<c2<<endl;
}
