#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n, m;
    cin >> n >> m;

    vector<ss> answers(n); 
    for (ii i = 0; i < n; i++) {
        cin >> answers[i];
    }

    vector<ii> points(m); 
    for (ii i = 0; i < m; i++) {
        cin >> points[i];
    }

    ii total = 0;

    // checking each column. so j is column and i is row
    for (ii j = 0; j < m; j++) {
        map<char, int> mapp;

        for (ii i = 0; i < n; i++) {
            mapp[answers[i][j]]++;
        }

        ii max_count = 0;
        for (auto x : mapp) {
            max_count = max(max_count, x.second);
        }

        total += max_count * points[j];
    }

    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while (t--) solve();
    solve();
    return 0;
}
