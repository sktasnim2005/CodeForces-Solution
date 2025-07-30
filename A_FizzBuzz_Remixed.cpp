#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll n;
    cin >> n;

    //ll count =0;
    //for(ll i=0;i<=n;i++){
    //    if(i%3 == i%5){
    //        count++;
    //    }
    //}
       
    //cout << count << endl;

    ll k = n/15;
    ll ans = k*3;

    ll rem = n%15;

    if(rem >= 0) ans++;
    if(rem >= 1) ans++;
    if(rem >= 2) ans++;
   
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}