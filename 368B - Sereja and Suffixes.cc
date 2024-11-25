#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    vector<int> result(n + 1);
    unordered_set<int> seen;

    for (int i = n - 1; i >= 0; --i) {
        seen.insert(a[i]);
        result[i + 1] = seen.size();
    }

    for (int i = 0; i < m; ++i) {
        cout << result[b[i]] << endl;
    }

    return 0;
}
