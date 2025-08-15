#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll a,b;
    cin >> a >> b;
    if(a==9 && b==1){
        cout << 9 << " " << 10 << endl;
        return;
    }

    if(a==b){
        cout << a << 0 << " " << a << 1 << endl;
    }
    else if(a+1==b){
        cout << a << " " << b << endl;
    }
    else{
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
