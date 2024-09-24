#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    pair<int, int> a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a,a+n);
    bool ans = true;
    for (int i = 0; i < n; i++) {
        if (s > a[i].first) {
            s += a[i].second;
        }
        else {
            ans = false;
            break;
        }
    }

    if (ans) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
