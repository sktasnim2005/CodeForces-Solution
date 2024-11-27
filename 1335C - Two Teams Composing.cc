#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;
        int max_freq = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
            max_freq = max(max_freq, freq[a[i]]);
        }

        int num_unique_skills = freq.size();

        // Calculate the possible maximum size for teams
        int x = min(num_unique_skills - 1, max_freq);
        int y = min(num_unique_skills, max_freq - 1);

        cout << max(x, y) << endl;
    }

    return 0;
}
