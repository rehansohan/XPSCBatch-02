
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   float n,m;
	    cin>>n>>m;
	    n=n-(n*.1);
	    if(n<m)cout<<"ONLINE"<<endl;
	    else if(n>m)cout<<"DINING"<<endl;
	    else
	    cout<<"EITHER"<<endl;
	}
	return 0;
}
