
//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
//EMON HOSSEN SOHAN
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;

int main()
{
int a,b;
cin>>a>>b;
int k=a+b+(a*b);
string s=to_string(k);
char ch=s[0];int c=1;
for(int i=1;i<s.size();i++)
{
 if(ch==s[i])
 {
  c++;
 }
}
if(c==s.size())
{
 cout<<"YES"<<endl;
}
else
 cout<<"NO"<<endl;

    return 0;
}



///  Alhamdulillah...
