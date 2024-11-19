#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char x = s[0], y = s[1], z = s[2];
        int p = x - '0';
        int q = z - '0';

        if (y == '<') {
            if (p >= q) {
                y = (p > q) ? '>' : '=';
            }
        }
         else if (y == '>') {
            if (p <= q) {
                y = (p < q) ? '<' : '=';
            }
        }
        else if (y == '=') {
            if (p != q) {
                y = (p < q) ? '<' : '>';
            }
        }

        cout << x << y << z << endl;
    }
    return 0;
}
