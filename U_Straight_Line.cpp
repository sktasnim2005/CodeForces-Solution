#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve(ii x) {
    ii n;
    cin >> n;

    ii x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int left = x1, bottom = y1, right = x2, top = y2;

    for (ii i = 1; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        left = max(left, x1);
        bottom = max(bottom, y1);
        right = min(right, x2);
        top = min(top, y2);
    }

    ii area = 0;
    if (right > left && top > bottom) {
        area = (right - left) * (top - bottom);
    }

    cout << "Case #" << x << ": " << area << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    for (ii i = 1; i <= t; i++) {
        solve(i);
    }
    return 0;
}
