#include <bits/stdc++.h>
using namespace std;

void solve() {
    pair<char,char> row1, row2;
    cin >> row1.first >> row1.second;
    cin >> row2.first >> row2.second;

    int frequency[26] = {0};
    frequency[row1.first - 'a']++;
    frequency[row1.second - 'a']++;
    frequency[row2.first - 'a']++;
    frequency[row2.second - 'a']++;

    int unique=0;
    for (int i = 0; i < 26; i++) {
        if (frequency[i] >0) {
            unique++;
        }
    }

    if(unique  ==1 ) cout<< 0 << endl;
    else if(unique == 2) cout<< 1 << endl;
    else if(unique == 3) cout<< 2 << endl;
    else cout<< 3 << endl;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}