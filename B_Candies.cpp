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

    if(n%2 == 0){
        cout << -1 << endl;
        return;
    }
    
    vector<ll> a;
    bb ok = true;


    while(n>1){
        ll x = (n-1)/2;
        ll y = (n+1)/2;

        if(x%2 ==1){
            a.push_back(2);
            n=x;
        }
        if(y%2 == 1){
            a.push_back(1);
            n=y;
        }
        if((ii)a.size() >40){
            ok = false;
            break;
        }
    }

    reverse(a.begin(), a.end());

    cout << a.size() << endl;
    for(auto& x:a){
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
