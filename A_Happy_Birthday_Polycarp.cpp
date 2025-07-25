#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

vector<ii>beautiful;

void precompute_num(){
    for(ll d=1;d<=9;d++){
        ll num = 0;
        for(ll l=1;l<=9;l++){
            num = num*10 + d;
            if(num <= 1e9){
                beautiful.push_back(num);
            }

        }
    }
}

void solve() { 
    ll n;  
    cin >> n;

    ll ans = upper_bound(beautiful.begin(),beautiful.end(),n) - beautiful.begin();


    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    precompute_num();
    sort(beautiful.begin(),beautiful.end());

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
