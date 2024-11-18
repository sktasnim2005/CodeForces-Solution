#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int count2 = count(a.begin(), a.end(), 2);
        if (count2 == 0) {
            cout << 1 << endl;
        }
        else if (count2 % 2 != 0) {
            cout << -1 << endl;
        }
        else {
            int Sum = 0;
            for (int i = 0; i < n; ++i) {
                if (a[i] == 2) {
                    Sum++;
                }
                if (Sum == count2 / 2) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
