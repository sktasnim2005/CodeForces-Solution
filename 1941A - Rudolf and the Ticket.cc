#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> line1(n), line2(m);
        for (int i = 0; i < n; ++i) {
            cin >> line1[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> line2[i];
        }

        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (line1[i] + line2[j] <= k) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
