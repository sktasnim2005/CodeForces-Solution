#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

ii n;

void SHOW(ii i){
    if(i ==n) return;
    cout << "I love Recursion" << endl;
    SHOW(i+1);
}

void solve() {    
    cin >> n;

    SHOW(0);  
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
