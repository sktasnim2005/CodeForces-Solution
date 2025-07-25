#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ii n;
    cin >> n;
    bool can = false;

    for(ii i=2;i<=n;i++){
        if(i%2==0){
          cout<<i<<endl;
          can = true;
        }
    }
    if(!can) cout<< -1 << endl;

    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
