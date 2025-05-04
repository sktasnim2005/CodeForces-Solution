#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n; // Number of gifts
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }   
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

        long long min_val_A = *min_element(a.begin(), a.end());
        long long min_val_B = *min_element(b.begin(), b.end());

        long long moves = 0;
        for (int i = 0; i < n; i++) {
            long long diff_a = a[i] - min_val_A;
            long long diff_b = b[i] - min_val_B;
            moves += max(diff_a, diff_b);
        }

        cout << moves << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

	int t;
	//int t=1;
	cin>>t;
	while (t--) {
		solve();
	}

    return 0;
}
