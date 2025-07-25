#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() { 
    ll n;  
    cin >> n;
        
    bool odd = false;

    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        if(x%2==1){
            odd = true;
            break;
        }
    }

    cout << (odd ? "First" : "Second") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
