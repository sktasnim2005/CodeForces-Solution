#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


int countPartitions(int n, int maxAllowed) {
    if (n == 0) return 1;             // Found valid partition
    if (n < 0 || maxAllowed == 0) return 0; // Invalid path

    // Either take maxAllowed, or skip it and reduce maxAllowed
    return countPartitions(n, maxAllowed - 1) + 
           countPartitions(n - maxAllowed, maxAllowed);
}
void solve() {
     int n;
    cout << "Enter n: ";
    cin >> n;

    int totalWays = countPartitions(n, n); // Start with maxAllowed = n
    cout << totalWays << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
