#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {
    ii n;
    cin >> n;

    vector<ii> a(n);
    set<ii>s;
    
    for(ii i=0;i<n;i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    ii duplicates = n - s.size();

    if(duplicates%2 == 1){
        cout << s.size() -1 << endl;
    }
    else{
        cout << s.size() << endl;
    }
    

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
