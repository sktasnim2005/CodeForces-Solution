#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    ll n,k;
    cin >> n >> k ;

    cout << (k==4*n-2 ? (k+1)/2 +1 : (k+1)/2) << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;while (t--)
     solve();
    return 0;
}
