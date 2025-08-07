#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    ll s,m;
    cin >> n >> s >> m;

    vector<pair<ll, ll>> A(n+2);

    A[0] = {0,0};
    A[n+1] = {m,m};

    for(ii i=1;i<=n;i++){
        cin >> A[i].first >> A[i].second;
    }

    //sort(A.begin(),A.end());

    for(ii i=1;i<A.size();i++){
        if(A[i].first-A[i-1].second >= s){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
