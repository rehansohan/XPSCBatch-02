
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int x;
	    cin>>x;
	    if(x>=1&&x<=10)
	    cout<<"Lower Double"<<endl;
	    else if(x>=11&&x<=15)
	    cout<<"Lower Single"<<endl;
	    else if(x>=16&&x<=25)
	    cout<<"Upper Double"<<endl;
	    else
	    cout<<"Upper Single"<<endl;
	}
	return 0;
}
