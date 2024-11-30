#include <iostream>
#include <vector>
#include <string>
using namespace std;

int min_operations(int n, int m, int k, const string& s) {
    int i = 0, ans = 0, count = 0;
    while (i < n) {
        if (s[i] == '1') {
            count = 0;
            i++;
        }
        else {
            count++;
            if (count == m) {
                ans++;
                count = 0;
                i += k;
            }
            else {
                i++;
            }
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        cout << min_operations(n, m, k, s) << endl;
    }

    return 0;
}
