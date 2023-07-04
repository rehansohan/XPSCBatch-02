
#include <bits/stdc++.h>
using namespace std;
int diff(string a,string b)
{
 int c=0;
 for(int i=0;i<a.size();i++)
 {
  c+=abs((a[i]-'0')-(b[i]-'0'));
 }
 return c;
}

int main()
{
    int t;
    cin >> t;
while(t--)
{
 int n,b;
 cin>>n>>b;

vector<string>s(n);
for(int i=0;i<n;i++)
{
 cin>>s[i];

}



int ans=INT_MAX;
for(int i=0;i<s.size();i++)
{
 for(int j=i+1;j<s.size();j++){

ans=min(ans,diff(s[i],s[j]));
 }

}
cout<<ans<<endl;



}


    return 0;
}
