#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {
    ss a,b;
    cin >> a >> b;
    ii n;
    cin >> n;

    cout << a <<" " << b << endl;
    while(n--){
        string murder, replace;
        cin >> murder >> replace;

        if(a==murder) a = replace;
        else b = replace;
        
        cout << a << " " << b << endl;
    }

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
