#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long n,m;
    cin >> n >> m;

    long long result = n * (m - 1);
    if (m == 1) result += n - 1; 

    cout<< result << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin>>t;while(t--)
       solve();
    return 0;
}
