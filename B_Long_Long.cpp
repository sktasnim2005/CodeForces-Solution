#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    cin >> n;

    vector<ll> a(n);

    for(ll &x: a) cin >> x;
    
    ll total_sum =0;
    ii count =0;
    bool negative = false;

    for(ii i=0;i<n;i++){
        total_sum +=abs(a[i]);

        if(a[i] < 0 && !negative){
            count++;
            negative = true;
        }
        if(a[i]>0){
            negative = false;
        }
    }


    cout << total_sum << " " << count << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}