#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll n,k;
    cin >> n >> k;
    
    ll left = n-k+1;
    ll right = n;

    ll odd_count = (right+1)/2 - (left/2);


    cout << (odd_count%2 ==0  ? "YES" : "NO") << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
