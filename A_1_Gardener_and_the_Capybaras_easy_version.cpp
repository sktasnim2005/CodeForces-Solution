#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if(s[1]=='a'){

        cout << s[0] << " " << s[1] << " " << s.substr(2,n-2)<< endl;

    }
    else{
        string a = s.substr(0, 1);
        string b = s.substr(1, n - 2);
        string c = s.substr(n - 1, 1);

        cout << a << " " << b << " " << c << endl;
    }
        

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;while(t--)
       solve();
    return 0;
}
