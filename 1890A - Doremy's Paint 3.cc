#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        map<int, int> m;  // Map to count the occurrences of each element
        m.clear();  // Clear the map for each test case

        // Read the array and count occurrences
        while (n--) {
            cin >> i;
            m[i]++;
        }

        if (m.size() <= 2 && abs(begin(m)->second - rbegin(m)->second) <= 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
