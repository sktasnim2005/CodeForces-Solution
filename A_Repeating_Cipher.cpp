#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    ss s;
    cin >> n >> s;

    ii i=0,step=1;
    
    while(i<n){
        cout << s[i];
        i += step;
        step++;
    }


    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
