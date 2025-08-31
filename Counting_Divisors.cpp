#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

ll s = 1e6;
vector<ll> val(s + 1,0);

void preCalculate(ll x){
    for(ll i=1;i<= x;i++){
        for(ll j=i;j<=x;j = 2*i){
            val[j]++;
        }
    }
}

void solve() {
    ll n;
    cin >> n;

    cout << val[n] << endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    preCalculate(s);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
