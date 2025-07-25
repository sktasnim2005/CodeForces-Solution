#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

ii n;

void SHOW(ii i){
    if(i ==0) return;
    cout << i;
    if(i>1) cout << " ";
    SHOW(i-1);
}

void solve() {    
    cin >> n;

    SHOW(n);  
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
