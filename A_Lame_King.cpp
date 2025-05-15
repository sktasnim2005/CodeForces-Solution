#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b;
    cin >> a >> b;
    int x= abs(a);
    int y= abs(b);
    if(x==y){
        cout<< x+y <<endl;
    }
    else{
        cout<< max(x,y)*2 -1 <<endl;
    }
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