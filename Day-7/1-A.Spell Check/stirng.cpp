
#include <bits/stdc++.h>
using namespace std;

int main() {
    string name = "Timru";

    int n;
    cin >> n;
    while(n--) {
        int m;
        cin >> m;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if(s==name)
        {
         cout<<"YES"<<endl;
        }
       else{
        cout<<"NO"<<endl;
       }
       //cout<<s<<" "<<name<<endl;
    }
}
