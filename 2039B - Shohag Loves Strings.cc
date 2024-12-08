#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len = s.size();

        bool found = false; 

        for (int i = 1; i < len; i++) {
            if (s[i] == s[i - 1]) {
                cout << s[i - 1] << s[i] << endl;
                found = true;
                break;  
            }
        }

        if (!found) {
            for (int i = 2; i < len; i++) {
                if (s[i] != s[i - 2]) {
                    cout << s[i - 2] << s[i - 1] << s[i] << endl;
                    found = true;
                    break;  
                }
            }
        }

        if (!found) {
            cout << "-1" << endl;
        }
    }
    return 0;
}
