#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll n,k;
    cin >> n >> k;

    ll extra_candies = n%k;
    ll max_extra = k/2;
    
    //cout << n- max(0LL, extra_candies - max_extra) << endl;
    cout << n - extra_candies << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
