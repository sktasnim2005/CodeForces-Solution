#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n,m;
    cin >> n >> m;
    
    vector<ii>a(n);

    for(ii i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    ll sum = a[n-1]+n;

    for(ii i=1;i<n;i++){
        sum+= a[i];
    }

    
    cout << (sum>m ? "NO" : "YES") << endl;
   
   

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}

