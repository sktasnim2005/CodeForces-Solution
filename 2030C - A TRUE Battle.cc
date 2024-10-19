#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ans = false;
        if (s[0] == '1' || s[n-1] == '1') {
            ans = true;
        }
        for (int i = 1; i < n; i++) {
            if (s[i-1] == '1' && s[i] == '1') {
                ans = true;
                break;
            }
        }

        if (ans) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
