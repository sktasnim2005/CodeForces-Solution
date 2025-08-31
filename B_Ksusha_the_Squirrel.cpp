#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ii n,k;
    cin >> n >> k;

    ss s;
    cin >> s;

    ii count =0;

    for(ii i=0;i< n-1;i++) {
        if(s[i]=='#'){
            count++;
        }
        else{
            count=0;
        }
        if(count>=k){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
