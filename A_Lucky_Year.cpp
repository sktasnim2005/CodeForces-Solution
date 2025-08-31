#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ss n;
    cin >> n;


    ii x = n[0] - '0';

    ll l = n.size();
    

    ll next_num = (x+1)*pow(10,l-1);
    
    //cout << next_num - to_integer(n) << endl;
    cout << next_num - stoll(n) << endl;
       


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
