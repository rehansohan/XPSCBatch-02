
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int>v(4);
	    for(int i=0;i<4;i++)
	    {
	        cin>>v[i];
	    }
	    int s=0;
	    sort(v.begin(),v.end());
	    for(int i=0;i<3;i++)
	    {
	        s+=v[i];
	    }
	    if(s<v[3])
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;

	}
	return 0;
}
