#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int

void solve() {
    ii n, k;
    cin >> n >> k;
    
    ii a = n, b = n - 1;
    ii ans = 0;

    while (k > 0) {
        k -= a;
        ans++;
        if (a != b){
            a=b;
        }
        else{
            a= b--;
        }
    }

    cout << ans << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;while (t--)
     solve();
    return 0;
}
