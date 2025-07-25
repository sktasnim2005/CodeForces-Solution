#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

bool isPrime(ii x) {
    if (x <= 1) return false; 
    for (int j = 2; j <= sqrt(x); j++) {
        if (x % j == 0)
            return false;
    }
    return true;
}

bool isRight(ii x){
    while(x>0){
        if(!isPrime(x)) return false;
        x/=10;
    }
    return true;
}

void solve() {
    ii n;
    cin >> n;

    cout << (isRight(n) ? "YES" : "NO") << endl;
    
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
