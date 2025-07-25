#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

vector<ll>lucky_num;

void lucky(ll x){
    if(x > 1e18) return;
    if(x != 0) {
        lucky_num.push_back(x);
    }
    lucky(x*10 +4);
    lucky(x*10 +7);
}

void solve() {    
    ll a,b;
    cin >> a >> b;

    lucky(0);
    sort(lucky_num.begin(),lucky_num.end());


    bool found = false;

    for(ll i : lucky_num){
        if(i >= a && i <= b){
            cout << i << " ";
            found = true;
        }
    }

    if(!found){
        cout << -1 << endl;
    }
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
