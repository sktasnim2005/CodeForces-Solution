#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll n;
    cin >> n;

    vector<ll> a(n);

    for(auto &x : a) cin >> x;

    ll Max = *max_element(a.begin(),a.end());
    ll Min = *min_element(a.begin(),a.end());


    if(Max == Min){
        cout << n*(n-1) << endl;
        return;
    }

    ll countMin=0, countMax=0;

    for(auto &x : a){
        if(x==Max) countMax++;
        if(x==Min) countMin++;
    }

    cout << countMax * countMin * 2 << endl;

   
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
