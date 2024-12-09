#include <bits/stdc++.h>
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

        bool possible = false;
        int index = -1;

        for (int i = 0; i < n; i++) {
            bool valid = true;
            for (int j = 0; j < n; j++) {
                if (i != j && abs(a[i] - a[j]) % k == 0) {
                    valid = false;
                    break;
                }
            }
            if (valid && n==2) {
                possible = true;
                index = 2;
                break;
            }
            else if (valid ) {
                possible = true;
                index = i+1 ;
                break;
            }
        }

        if (possible) {
            cout << "YES"<<endl << index << endl;
        }
        else {
            cout << "NO"<<endl;
        }
    }
    return 0;
}
