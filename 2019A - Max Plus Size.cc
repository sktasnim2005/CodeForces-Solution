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
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int countO = 0, countE = 0;
        int maxO = 0, maxE = 0;
        int ans1 = 0, ans2 = 0;

        for (int i = 0; i < n; ++i) {
            if (i % 2 != 0) {
                countO++;
                maxO = max(maxO, arr[i]);
            } else {
                countE++;
                maxE = max(maxE, arr[i]);
            }
        }

        ans1 = maxO + countO;
        ans2 = maxE + countE;

        int x = max(ans1, ans2);
        cout << x << endl;
    }
    return 0;
}
