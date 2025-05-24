#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long a,b ;
    cin >> a >> b;
    if((a % 2 == 0 && a!=b) || (b % 2 == 0 && a!=b)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while(t--)
       solve();
    return 0;
}
