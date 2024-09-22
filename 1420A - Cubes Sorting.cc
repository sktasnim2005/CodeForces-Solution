#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool sorted = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 1; i < n; i++) {
            if (a[i] >= a[i - 1]) {
                sorted = true;
                break;
            }
        }

        if (sorted) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
