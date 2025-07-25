#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii a,b,c,d;
    cin >> a >> b >> c >> d;

    vector<ii>A={a,b,c,d};

    sort(A.begin(),A.end());

    if(A[0]+A[1] > A[2] || A[1]+A[2] > A[3]){
        cout << "TRIANGLE" << endl;
    }
    else if(A[0]+A[1] == A[2] || A[1]+A[2] == A[3]){
        cout << "SEGMENT" << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }
    
      
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}