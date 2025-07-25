#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n,k;
    ss s;
    cin >> n >> k >> s;

    ii countZero = count(s.begin(),s.end(),'0');
    ii countOne  = n - countZero;
    
    ii need_mismatch = (n/2) -k;

    countZero -= need_mismatch;
    countOne  -= need_mismatch;

    cout << (countZero<0 || countOne <0 || countZero%2 !=0 || countOne%2 !=0  ? "NO" : "YES") << endl;

   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}