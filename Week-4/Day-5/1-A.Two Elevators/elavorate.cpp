
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
     int a,b,c;
     cin>>a>>b>>c;
     a=a-1;
     b=abs(b-c)+(c-1);
     if(a<b)cout<<"1"<<endl;
     else if(a>b)cout<<"2"<<endl;
     else cout<<"3"<<endl;
    }
    return 0;
}
