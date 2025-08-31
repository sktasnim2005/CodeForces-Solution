#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ii n;
    ss s;    
    cin >> n >> s;

    bb foundA = false;
    bb foundC = false;

    
    for(ii i=1;i< n-1;i++){
        if(s[i] == s[0]){
            foundA = true;
            break;
        }
    }
    for(ii i=1;i< n-1;i++){
        if(s[i] == s[n-1]){
            foundC = true;
            break;
        }
    }
    

    cout << (foundA && foundC ? "Yes" : "No") << endl; 


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
