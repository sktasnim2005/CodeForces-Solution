#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ll a,b,d;
    char c,e;
    cin >> a >> c >> b >> e >> d;

    if(c=='+'){
        ll x=a+b;
        if(x==d)cout<<"Yes" <<endl;
        else cout<< x << endl;
    }
    if(c=='-'){
        ll x=a-b;
        if(x==d)cout<<"Yes" <<endl;
        else cout<< x << endl;
    }
    if(c=='*'){
        ll x=a*b;
        if(x==d)cout<<"Yes" <<endl;
        else cout<< x << endl;
    }
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
