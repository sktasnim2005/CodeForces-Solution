#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> cars(n);
        long long sum = 0;
        int mx=0;

        for (int i = 0; i < n; ++i) {
            cin >> cars[i];
            sum += cars[i];
            mx=max(mx,cars[i]);
        }

        cout<< max((sum + x - 1) / x, 1LL*mx)<<endl;  // Ceiling division to ensure we cover all cars

    }

    return 0;
}
