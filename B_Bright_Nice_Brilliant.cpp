#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n;
    cin >> n;

    for(ii i=1;i<=n;i++){
        for(ii j=1;j<=i;j++){
            if(j==i || j == 1) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout<< endl;
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;while (t--)
     solve();
    return 0;
}
