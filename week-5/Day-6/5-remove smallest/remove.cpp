#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
         cin>>v[i];

        }
        sort(v.begin(),v.end());int flag=0;
        for(int i=0;i<n-1;i++)
        {
         int s=v[i+1]-v[i];
         int k=min(v[i],v[i+1]);
      if(s>1)
      {
       flag=1;break;
      }
        }
        if(flag==1)
         cout<<"NO"<<endl;
        else
         cout<<"YES"<<endl;

    }

    return 0;
}
