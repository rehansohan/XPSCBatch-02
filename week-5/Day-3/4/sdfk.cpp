
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 while(n--){
 int t;
 cin>>t;
vector<int>v(t);
int mi=INT_MAX;
for(int i=0;i<t;i++)
{
 cin>>v[i];

}
for(int i=t-2;i>=0;i--)
{
 mi=min(mi,v[i]);
}

int c=0;
int flag=0;
for(int i=t-2;i>=0;i--)
{

for(int j=i;j>=0;j--)
{
 if(v[i]>v[j])
 {
  flag=1;
  break;
 }
}
if(flag==1)
{
 c++;
}


}
cout<<c<<endl;

}

}
