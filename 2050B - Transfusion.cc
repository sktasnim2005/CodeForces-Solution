#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sumE = 0, sumO = 0, evenCount = 0, oddCount = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i % 2 == 0) { 
                sumE += a[i];
                evenCount++;
            } 
            else {
                sumO += a[i];
                oddCount++;
            }
        }

        if (sumE % evenCount == 0 && sumO % oddCount == 0) {
            long long targetE = sumE / evenCount;
            long long targetO = sumO / oddCount;

            if (targetE == targetO) {
                cout << "YES" << endl;
                continue;
            }
        }

        cout << "NO" << endl;
    }
    return 0;
}
