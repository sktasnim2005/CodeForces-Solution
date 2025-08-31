#include <bits/stdc++.h>
using namespace std;

long long max_damage(int n, vector<int>& types, vector<long long>& damages) {
    vector<long long> fire, frost;
    for (int i = 0; i < n; i++) {
        if (types[i] == 0)
            fire.push_back(damages[i]);
        else
            frost.push_back(damages[i]);
    }

    sort(fire.rbegin(), fire.rend());   // descending
    sort(frost.rbegin(), frost.rend()); // descending

    if (fire.empty()) {
        long long sum = 0;
        for (auto x : frost) sum += x;
        return sum;
    }
    if (frost.empty()) {
        long long sum = 0;
        for (auto x : fire) sum += x;
        return sum;
    }

    long long total = 0;
    for (auto x : fire) total += x;
    for (auto x : frost) total += x;

    total *= 2;

    if (fire.size() > frost.size()) {
        total -= fire.back();
    } else if (frost.size() > fire.size()) {
        total -= frost.back();
    } else {
        total -= min(fire.back(), frost.back());
    }

    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> types(n);
        vector<long long> damages(n);
        for (int i = 0; i < n; i++) cin >> types[i];
        for (int i = 0; i < n; i++) cin >> damages[i];

        cout << max_damage(n, types, damages) << "\n";
    }

    return 0;
}
