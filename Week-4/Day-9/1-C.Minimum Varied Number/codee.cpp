
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string s;
  cin>>s;
  int sz=s.size()-1;
  int k=stoi(s)-pow(10,sz);
  cout<<k<<endl;


 }
}
