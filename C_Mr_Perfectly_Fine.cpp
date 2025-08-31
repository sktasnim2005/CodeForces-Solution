#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll n;
    
    cin >> n ;

    ll min01 = LLONG_MAX;
    ll min10 = LLONG_MAX;
    ll min11 = LLONG_MAX;

    for(ll i=0;i<n;i++){
        ll m;
        ss s;
        cin >> m >> s;
        if(s == "01"){
            min01 = min(min01, m);
        }
        if(s == "10"){
            min10 = min(min10, m);
        }
        if(s == "11"){
            min11 = min(min11, m);
        }

    }

    ll ans = min11;
   
    if(min01 != LLONG_MAX && min10 != LLONG_MAX){
        ans = min(ans, min01+min10);
    }


    cout << (ans == LLONG_MAX ? -1 : ans) << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
