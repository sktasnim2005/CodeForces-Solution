#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

const ii MOD = 1e9 +7;

vector<vector<ll>> dp(3001, vector<ll>(3001,-1));


ll partition(ll n , ll m){
    if(n==0) return 1;
    if(n < 0 || m ==0 ) return 0;

    if(dp[n][m] != -1) return dp[n][m];

    return dp[n][m] = (partition(n, m -1) + partition(n-m, m))% MOD;

}

void solve() {
    ll n;
    cin >> n;

    ll total = partition(n,n);
    cout << total << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
