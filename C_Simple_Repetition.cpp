#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

bb isPrime(ll x){
    if (x <= 1) return false;
    for(long long i = 2; i*i <= x; i++) {
        if(x % i == 0) return false;
    }
    return true;
}

void solve() {
    ll x,k;
    cin >> x >> k;

    if(k==1){
        if(isPrime(x)){
            cout << "YES" << endl;
            return;
        }
    }
    if(x ==1 && k==2){
            cout << "YES" << endl;
            return;
    }
    

    cout << "NO" << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
