#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> lower(26, 0), upper(26, 0);

        for (char c : s) {
            if (islower(c)) {
                lower[c - 'a']++;
            } else {
                upper[c - 'A']++;
            }
        }

        int pairs = 0;
        for (int i = 0; i < 26; ++i) {
            int match = min(lower[i], upper[i]);
            pairs += match;
            lower[i] -= match;
            upper[i] -= match;
        }

        for (int i = 0; i < 26 && k > 0; ++i) {
            int extra = min(k, (lower[i] + upper[i]) / 2);
            pairs += extra;
            k -= extra;
        }

        cout << pairs << endl;
    }
    return 0;
}
