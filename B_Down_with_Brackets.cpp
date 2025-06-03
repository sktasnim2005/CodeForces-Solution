#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    //ii n;
    ss s;
    cin >> s;
    ii l = s.size();
    bool can = true;

    //for(ii i=0;i<l/2;i++){
    //    if(s[i]==')'){
    //        can = false;
    //        break;
    //    }
    //}     

    //cout<< (can ? "NO" : "YES") << endl;
    cout<< ( l%2 == 1 ? "YES" : "NO") << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
