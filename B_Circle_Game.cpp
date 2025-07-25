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
    for(ii i = 0; i < n; i++) {
        cin >> a[i];
    }

    ii index = 0;
    ll min_Val = a[0];

    for(ii i = 1; i < n; i++) {
        if(min_Val > a[i]) {
            min_Val = a[i];
            index = i;
        }
    }
    if (n % 2 == 0){
        cout << (index % 2 == 1 ? "Mike" : "Joe") << endl;
    }
    else{
        cout << "Mike" << endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; 
    while (t--) solve();
    return 0;
}
