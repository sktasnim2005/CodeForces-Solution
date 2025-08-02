#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n,s;
    cin >> n >> s;

    vector<ii>a(n);

    for(ii &x :a) cin >> x;

    ii sum = accumulate(a.begin(),a.end(),0);
    
    if(s > sum ){
        cout << -1 << endl;
        return;
    }
   
    sort(a.rbegin(),a.rend());
    
    for(ii i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;


    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}