#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll n;
    cin >> n;

    vector<ll>a(n);

    for(auto &x : a) cin >> x;

    ll sum = accumulate(a.begin(),a.end(),0);

    sum/=n;
    bool can = true;

    for(ll i=0;i<n-1;i++){
        if(a[i] < sum ){
            can = false;
            break;
        }
        a[i+1] += a[i]-sum;
        a[i] = sum;
    }


    cout << (can? "YES" : "NO") << endl;   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
