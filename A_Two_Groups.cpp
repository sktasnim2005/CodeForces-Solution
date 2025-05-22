#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    vector<long long>A(n);
    long long sum=0;
   
    for(long long i=0;i<n;i++){
        cin>>A[i];
        sum+=A[i];
    }
   cout<<abs(sum)<<endl;
   
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