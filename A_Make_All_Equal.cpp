#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    cin >> n;
    vector<ii>a(n);

    for(ii &x: a) cin >> x;

    map<ii, ii> freq;
    for(ii x: a){
        freq[x]++;
    }

    ii max_freq=0;
    for(auto[a,b] : freq){
        max_freq = max(max_freq,b);
    }

    cout << n - max_freq << endl;   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
