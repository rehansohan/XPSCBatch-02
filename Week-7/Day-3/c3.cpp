#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int c=0;
	    while(n!=50)
	    {
	        if(n>50)
	        {
	            n-=3;
	        }
	        else
	        {
	            n+=2;
	        }
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
