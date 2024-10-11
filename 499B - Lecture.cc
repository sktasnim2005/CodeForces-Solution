#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> dict;
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b ;
        if (b.length() < a.length()) {
            dict[a] = b ;
        } else {
            dict[a] = a;
        }
    }

    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        cout << dict[a] << " ";
    }
    cout << endl;

    return 0;
}
