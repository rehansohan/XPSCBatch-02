#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
   int n;
   cin>>n;
   vector<int>v(n+1);
   vector<int>r(n+1);
   for(int i=1;i<=n;i++)
   {
    cin>>v[i];
   }
     if(v[1]!=n){
    cout<<"NO"<<endl;
    continue;
     }
   for(int i=1;i<=n;i++)
   {
    r[v[i]]++;
   }

   //for(auto u:r)cout<<u<<" ";
  // cout<<endl;

    for(int i=n-1;i>=1;i--)
    {
     r[i]+=r[i+1];
    }
   // for(auto u:r)cout<<u<<" ";
   // cout<<endl;
   if(v==r)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
    }
    return 0;
}
