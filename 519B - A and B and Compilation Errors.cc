#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n-1);
    vector<int> c(n-2);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < n-2; ++i) {
        cin >> c[i];
    }

    // Find the first disappeared error
    unordered_map<int, int> countA, countB, countC;
    for (int x : a) countA[x]++;
    for (int x : b) countB[x]++;
    for (int x : c) countC[x]++;

    int firstError, secondError;

    for (int x : a) {
        if (countA[x] != countB[x]) {
            firstError = x;
            break;
        }
    }
    for (int x : b) {
        if (countB[x] != countC[x]) {
            secondError = x;
            break;
        }
    }

    cout << firstError << endl << secondError << endl;
    return 0;
}
