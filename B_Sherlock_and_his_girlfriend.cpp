#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false; 
    for (int j = 2; j <= sqrt(x); j++) {
        if (x % j == 0)
            return false;
    }
    return true;
}


void solve() {
    int n;
    cin >> n;

    if (n < 3) {
        cout << 1 << endl;
        for (int i = 2; i < n+2; i++) {
            cout << 1 << " ";  
        }
        cout << endl;
    } 
    else {
        cout << 2 << endl;
        for (int i = 2; i < n+2; i++) {
            if (isPrime(i)) {
                cout << 1 << " ";
            } 
            else {
                cout << 2 << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
