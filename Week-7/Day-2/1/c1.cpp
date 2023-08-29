//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
//EMON HOSSEN SOHAN
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
/*int gcd(int a,int b)
{
 if(b==0)
  return a;
 return gcd(b,a%b);
}

//type of sieve algorithom not sieve 2  4 8 16 32 or 3 6 12 24
 vector<int>a(n+1,0);

 for(int i=1;i<=n;i++)
 {
  if(a[i]==0){
  for(int j=i;j<=n;j+=j)
  {
   a[j]++;
   v.push_back(j);
  }
  }*/
using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;

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
 int mi=INT_MAX;

 mi=min(mi,abs(v[0]-v[1]));
 for(int i=1;i<n-1;i++)
 {
  int k=abs(v[i]-v[i-1]);
  int f=abs(v[i]-v[i+1]);
 int h=max(k,f);

 mi=min(mi,h);
 }
 mi=min(mi,abs(v[n-1]-v[n-2]));
 cout<<mi<<endl;

}

    return 0;
}



///  Alhamdulillah...

