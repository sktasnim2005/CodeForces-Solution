#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

ll n;

void SHOW(ll i){
    if(i<10){
        cout << i;
        return;
    }
    SHOW(i/10);
    cout << " " << i%10;
}

void solve() {    
    cin >> n;

    SHOW(n);  
    cout << endl;
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
