#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() { 
    ll k,a,b,x,y;  
    cin >> k >> a >> b >> x >> y;

    ll count =0;
    if(x>y){
         swap(x,y);
         swap(a,b);   
    }

    if(k >=a){
        ll cook = (k-a)/x+1;
        count += cook;
        k -= cook*x;
    }
    if(k >=b){
        ll cook = (k-b)/y+1;
        count += cook;
        k -= cook*y;
    }
    

   cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; 
    while (t--) solve();
    return 0;
}
