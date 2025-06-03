#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string


void solve() {
    ll a,b;
    char c;
    cin >> a >> c >> b;

    if(c =='+') cout<< a+b << endl;
    if(c =='-') cout<< a-b << endl;
    if(c =='*') cout<< a*b << endl;
    if(c =='/') cout<< a/b << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
