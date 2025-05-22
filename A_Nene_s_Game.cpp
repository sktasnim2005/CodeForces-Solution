#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k,q;
    cin >> k >> q ;
    vector<int> a(k);
   
    for(int i=0;i<k;i++){
        cin>> a[i];
    }
    for(int i=0;i<q;i++){
        int b;
        cin>> b;
        cout<< min(a[0]-1,b)<< " ";
    }
    cout<<endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
