
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int x=s[0]-'0';
	    x*=10;
	    x+=s[1]-'0';
	    int y=s[3]-'0';
	    y*=10;
	    y+=s[4]-'0';
	    if(x>12)cout<<"DD/MM/YYYY"<<endl;
	    else if(y>12)cout<<"MM/DD/YYYY"<<endl;
	    else
	    cout<<"BOTH"<<endl;

	}
	return 0;
}
