#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    cin >> n;

    ii a=n%10;
    //cout << "a = " <<  a << endl;

    ii b = n/10;

    //cout << "b = " << b << endl;

    cout << (a%b==0 || b%a==0 ? "YES" : "NO") << endl;
    

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}