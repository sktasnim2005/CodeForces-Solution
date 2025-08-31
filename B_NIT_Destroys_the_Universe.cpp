#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll n;    
    cin >> n;

    vector<ll> a(n);

    for(auto& x : a) cin >> x;

    ll left = -1, right =-1;

    for(ll i =0;i<n;i++){
        if(a[i] != 0){
            if(left == -1){
                left = i;
            }
            right = i;
        }
    }

    if(left == -1){
        cout << 0 << endl;
        return;
    }

    ll allZero = 0;
    allZero = count(a.begin() + left, a.begin() + right + 1, 0);


    if(allZero == 0){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
