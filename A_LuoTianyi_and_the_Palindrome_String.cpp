#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ss s;
    cin >> s;

    bool can = true;
    ii l = s.size();

    for(ii i=1;i<l;i++){
        if(s[i] != s[0]){
            can=false;
            break;
        }
    }

    cout<<(can? -1 : l-1)<<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
