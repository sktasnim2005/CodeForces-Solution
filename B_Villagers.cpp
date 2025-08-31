#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ii n;
    cin >> n;

    vector<ii>a(n);
    map<ii, ii> mapp;

    for(auto& x : a) {
        cin >> x;
        mapp[x]++;
    }

    sort(a.begin(),a.end());
    
    for(auto&[a,b] : mapp){
        if(b >= 2){ 
            cout << "YES" << endl;
            return;
        }
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
