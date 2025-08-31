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

    ii chest =0, biceps =0, back =0;

    for(ii i=0;i<n;i++){
        if(i%3==0) chest += a[i];
        else if(i%3==1) biceps += a[i];
        else back += a[i];
    }

    if(chest >= biceps && chest >= back) {
        cout << "chest" << endl;
    }
    else if(chest <= biceps && biceps >= back) {
        cout << "biceps" << endl;
    }
    else{
        cout << "back" << endl;
    }

    
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
