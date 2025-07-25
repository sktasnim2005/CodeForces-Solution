#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll n;
    cin >> n;

    ll sum = 0;
    ll count =0;

    for(ll i=1; sum+i<=n;i++){
                sum+=i;
                count++;
    }
   

    cout << count << endl;
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}