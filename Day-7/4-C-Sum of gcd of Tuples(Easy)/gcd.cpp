#include<bits/stdc++.h>
using namespace std;
int gcd_2(int a,int b)
{
 while(b!=0)
 {
  int tmp=b;
  b=a%b;
  a=tmp;
 }
 return a;
}
int gcd_3(int a,int b,int c)
{
int g=gcd_2(a,b);
return gcd_2(g,c);
}
int main()
{
 int n;
 cin>>n;
 int sum=0;
 for(int i=1;i<=n;i++)
 {
  for(int j=1;j<=n;j++)
  {
   for(int k=1;k<=n;k++)
   {
    int  sum+=gcd_3(i,j,k);
   }
  }
 }
 cout<<sum<<endl;
}
