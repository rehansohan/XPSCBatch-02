
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
      int a,b;
      cin>>a>>b;
      int m=1+a;
      int n=1-a;
      int c=1;
      if(b>=n&&b<=m)
      {
       if(b>=1)
       {
        for(int i=1;i<=a;i++)
        {
         if(c<b){
         cout<<"+";
         c++;
         }
         else
          cout<<"*";
        }
        cout<<endl;
       }
       else if(b<0)
       {
         for(int i=1;i<=a;i++)
        {
         if(c>b){
         cout<<"-";
         c--;
         }
         else
          cout<<"*";
        }
        cout<<endl;
       }
       else
       {
        cout<<"-";
        for(int i=2;i<=a;i++)
        {

          cout<<"*";
        }
          cout<<endl;

       }
      }
      else
       cout<<"-1"<<endl;
    }

    return 0;
}
