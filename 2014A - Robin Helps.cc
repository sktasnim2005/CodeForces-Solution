#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int sum1 = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                sum1 += a[i];
            } else if (a[i] == 0 && sum1 > 0) {
                sum1--;
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
