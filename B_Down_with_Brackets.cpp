#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() { 
    ss s;  
    cin >> s;

    ii bracket =0;

    for(ll i=0;i<s.size()-1 ;i++){
        if(s[i]=='(') bracket++;
        else bracket--;

        if(bracket==0){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
