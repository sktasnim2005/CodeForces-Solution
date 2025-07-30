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
    
    for(ii &x : a) cin >> x;

    set<ii> occupied;
    
    occupied.insert(a[0]);

    bool ok = true;

    for(ii i =1;i<n;i++){
        ii seat = a[i];
        if(occupied.count(seat-1) || occupied.count(seat+1)){
            occupied.insert(a[i]);
        } 
        else{
            ok = false;
            break;
        }
    }
    
    cout << (ok ? "YES" : "NO") << endl;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}