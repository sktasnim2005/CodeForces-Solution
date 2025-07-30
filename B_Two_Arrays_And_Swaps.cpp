#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n, k;
    cin >> n >> k;

    vector<ii> a(n), b(n);

    for(ii &x :a){
        cin >> x;
    }
    for(ii &x :b){
        cin >> x;
    }

    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());

    for(ii i=0;i<k;i++){
        if(a[i] < b[i]){
            swap(a[i],b[i]);
        }
    }
    
    cout << accumulate(a.begin(),a.end(),0) << endl;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}