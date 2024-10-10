#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int max_v = 0, min_v = 101, max_i, min_i; // min_v = 101 because its highest value is 100 see problemset 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max_v) {
            max_v = a[i];
            max_i = i;
        }
        if (a[i] <= min_v) { // there may be many same smallest value
            min_v = a[i];
            min_i = i;
        }
    }

    int moves = max_i + (n - 1) - min_i;
    if (max_i > min_i) {//If the tallest soldier is before the shortest soldier, reduce the move count by one to avoid double counting.
        moves--; // Adjust for overlap
    }

    cout << moves << endl;

    return 0;
}
