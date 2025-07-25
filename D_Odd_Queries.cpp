#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll n,q;
    cin >> n >> q;

    vector<ll>a(n+1),b(n+1,0);
    
    for(ii i=1;i<=n;i++){
        cin >> a[i];
        b[i] = b[i-1] + a[i];
    }

    ll sum = b[n];

    while(q--){
        ll l,r,k;
        cin >> l >> r >> k;
    
        ll sum_old = b[r] - b[l-1];

        ll sum_new =((r-l) +1 ) * k;

        ll total =sum - sum_old +sum_new;

        cout << (total%2 !=0 ? "YES" : "NO") << endl;; 

    }

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}