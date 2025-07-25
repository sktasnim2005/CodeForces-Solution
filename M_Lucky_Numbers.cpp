#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

bool is_lucky(ll x){
    while(x){
        ii d =x%10;
        if(d!=4 && d!=7) return false;
        x/=10;
    }
    return true;
}

void solve() {    
    ll a,b;
    cin >> a >> b;

    bool found = false;

    for(ll i=a;i<=b;i++){
        if(is_lucky(i)){
            cout << i << " ";
            found = true;
        }
    }

    if(!found){
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
