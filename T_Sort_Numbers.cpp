#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ll a,b,c;
    cin >> a >> b >> c;

    ll x=a,y=b,z=c;

    vector<ll> arr = {x,y,z};
    sort(arr.begin(),arr.end());

    for(auto& p : arr){
        cout << p << endl;
    }

    cout << endl << a << endl << b << endl << c << endl;
   

     

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
