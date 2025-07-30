#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n,f,k;
    cin >> n >> f >> k;

    vector<ii>a(n);
    
    for(ii &x : a) cin >> x;

    ii favourite = a[f-1];

    ii greater = 0, equal = 0;

    for(ii i =0;i<n;i++){
        if(a[i] > favourite) greater++;
        else if(a[i]== favourite) equal++;
    }
    
    if(greater >=k) cout << "NO" << endl;
    else if(greater + equal <=k) cout << "YES" << endl;
    else cout << "MAYBE" << endl;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}