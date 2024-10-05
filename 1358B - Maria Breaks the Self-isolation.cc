#include <iostream>
#include <vector>
#include <algorithm>
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

        sort(a.begin(), a.end());

        int result = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] <= i + 1) {
                result = i + 1;
            }
        }

        cout << result + 1 << endl; // Maria herself will also go so this one 
    }
    return 0;
}
