

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
int t;
cin>>t;
while(t--)
{
vector<int>v(3);
int c=0;
for(int i=0;i<3;i++)
{
 cin>>v[i];
 if(v[i]==1)
 {
  c++;
 }
}
if(c>=2)
{
cout<<"Not now"<<endl;
}
else
 cout<<"Water filling time"<<endl;

}

    return 0;
}



///  Alhamdulillah...
