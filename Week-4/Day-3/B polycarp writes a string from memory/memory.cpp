
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

  set<char>st;
  int c=0;
  for(int i=0;i<s.size();i++)
  {
  if(st.count(s[i])==0)
  {
   if(st.size()==3)
   {
    st.clear();
    c++;

   }

  }
  st.insert(s[i]);
  }
  if(!st.empty()){
   c++;
  }
  cout<<c<<endl;





 }
}
