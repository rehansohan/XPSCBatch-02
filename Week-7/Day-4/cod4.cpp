


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
    int n;
    cin>>n;
    while(n--){
    int t;
  int a,b;
  cin>>a>>b;
  if(a>b)
    cout<<a-b<<endl;
  else
    cout<<b-a<<endl;
    }
    return 0;
}

