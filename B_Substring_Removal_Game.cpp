#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        vector<int> blocks;
        
        int count = 0;
        for (char c : s) {
            if (c == '1') {
                count++;
            } else {
                if (count > 0) {
                    blocks.push_back(count);
                    count = 0;
                }
            }
        }
        if (count > 0) blocks.push_back(count);

        sort(blocks.rbegin(), blocks.rend());

        int aliceScore = 0;
        for (int i = 0; i < blocks.size(); i += 2) {
            aliceScore += blocks[i];
        }

        cout << aliceScore << "\n";
    }

    return 0;
}
