


#include<bits/stdc++.h>
using namespace std;

/*void fun(int startingIndex,int n){
    for(int i=startingIndex;i<=n;i+=4){
        cout<<i-1<<' '<<i<<' '<<i-3<<' '<<i-2<<' ';}
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string five="4 5 1 2 3 ";
        string six="4 5 6 1 2 3 ";
        string seven="3 4 5 6 7 1 2 ";
        if(n<4){
            cout<<-1<<endl;continue;}
       if(n%4==0){
            fun(4,n);
            cout<<endl;continue;}
         if(n%4==1){
            cout<<five;
            fun(9,n);
            cout<<endl;continue;}
        if(n%4==2){
            cout<<six;
            fun(10,n);
            cout<<endl;continue;}
        if(n%4==3){
            cout<<seven;
            fun(11,n);
            cout<<endl;continue;}

    }

    return 0;
}*/
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        int cnt_one=0;
        int cnt_zero=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
              if(a[i]==1)cnt_one++;
            else cnt_zero++;

        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        bool answer=true;
        if(a[0]!=b[0]||a[n-1]!=b[n-1])
        {
            cout<<"NO"<<endl;
            continue;
        }

        for(int i=1;i<n-1;i++)
        {
            if(a[i]!=b[i]&&a[i]==0&&cnt_one==0)
            {
                answer=false;
                break;
            }
            if(a[i]!=b[i]&&a[i]==1)
            {
                answer=false;
                break;
            }
        }
        if(!answer)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
    return 0;
}

