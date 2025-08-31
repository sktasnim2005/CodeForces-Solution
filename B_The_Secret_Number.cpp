#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll n;
    cin >> n ;

    vector<ll> a;

    for(ll p= 1;p<=18;p++){
        ll div = pow(10,p);
        
        if(n % (div+1) ==0){
            a.push_back(n /(div+1) );
        }
    }

    sort(a.begin(),a.end());

    if(a.empty()){
        cout << 0 << endl;
        return;
    }

    cout << a.size() << endl;
    for(auto&x : a){
        cout << x << " ";
    }
    

    cout << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
