#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii x,y,z;
    cin >> x >> y >> z;

    vector<ii>A={x,y,z};
    
    sort(A.begin(),A.end());

    if(A[1] != A[2]){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    cout << A[0] << " " << A[0] << " " << A[1] << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}