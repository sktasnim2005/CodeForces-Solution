#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int closest = a[0];
    for (int i = 1; i < n; i++) {
        if (abs(a[i]) < abs(closest)) {
            closest = a[i];
        }
    }

    int difference = abs(closest);

    cout << difference << endl;

    return 0;
}
