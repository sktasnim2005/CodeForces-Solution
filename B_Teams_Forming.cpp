#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ii n;
    cin >> n;

    vector<ii>a(n);

    for(auto& x :a) cin >> x;

    sort(a.begin(),a.end());

    ii need = 0;


    for(ii i=0;i<n;i+=2){
        need += a[i+1] - a[i];        
    }

    cout << need << endl;
       
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
