#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n;
    ss s;
    cin >> n >> s;

    ii counT=0;
    for(ii i=0; i<n-2; i++) {
        if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x'){
            counT++;
        }
    }


    cout << counT << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t;cin >> t;while (t--) 
    solve();
    return 0;
}
