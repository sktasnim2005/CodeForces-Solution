#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll n;
    cin >> n;

    vector<ll> a(n);

    for(auto &x : a) cin >> x;

    ll sum = accumulate(a.begin(),a.end(),0LL);

    ll small_odd = LLONG_MAX;

    for(auto &x :a){
        if(x%2 == 1){
            small_odd = min(small_odd,x);
        }
    }

        
    cout << (sum%2 ==0 ? sum : sum-=small_odd) << endl;

   
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
