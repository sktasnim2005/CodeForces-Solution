#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n;
    cin >> n;
    
    vector<ii>a(n);

    for(ii i=0;i<n;i++){
        cin >> a[i];
    }
    
    sort(a.begin(),a.end());

    cout<< min(n-2,a[n-3]) << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}