#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n ;
    vector<int> a(n);
   
    for(int i=0;i<n;i++){
        cin>> a[i];
    }

    vector<int> b = a;
    sort(a.begin(), a.end());

    bool ans = true;
    for(int i=0;i<n;i++){
        if(a[i]%2 != b[i]%2){
            ans = false;
            break;
        }
    }

    cout<< (ans ? "YES" :"NO") <<endl;
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
