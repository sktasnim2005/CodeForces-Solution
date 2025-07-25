#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

bool is_Prime(ii x){
    if(x < 2) return false;
    for(ii i=2; i*i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

void solve() {    
    ii n;
    cin >> n;

    for(ii i=2;i<=n;i++){
        if(is_Prime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
