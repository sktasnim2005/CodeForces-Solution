#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() { 
    char c;   
    ii n;
    cin >> c >> n;

    vector<ii>A(n);

    for(ii i=0;i<n;i++){
        cin >> A[i];
    }

    for(ii i=0;i<n;i++){
        for(ii j=0;j<A[i];j++){
            cout << c;
        }
        cout<<endl;
    }

        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
