
#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
while(t--)
{
 int n;
 cin>>n;
 vector<int>v(n);
  map<int,int>mp;
 for(int i=0;i<n;i++)
 {
  cin>>v[i];
  mp[v[i]]++;
 }
int ans=mp.size();
if((n-ans)%2!=0)
 ans--;
 cout<<ans<<endl;

}


    return 0;
}
