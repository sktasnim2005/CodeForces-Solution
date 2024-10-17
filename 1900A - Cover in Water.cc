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

        int count1 = 0;
        bool tripleDotCount = false;

        for (int i = 0; i < n; i++) {
            if (i <= n - 3 && s.substr(i, 3) == "...") {
                tripleDotCount=true;
                i += 2;
            }
            if (s[i] == '.') {
                count1++;
            }
        }

        if (tripleDotCount ) {
            cout << 2 << endl;
        }
        else {
            cout << count1 << endl;
        }
    }
    return 0;
}
