#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
        cin >> n;
        vector<int> w(n);
        for (int i = 0; i < n; ++i) {
            cin >> w[i];
        }

        int left = 0, right = n - 1;
        long long sumLeft = w[0], sumRight = w[n-1];
        int maxCandies = 0;

        while (left < right) {
            if (sumLeft == sumRight) {
                maxCandies = max(maxCandies, (left + 1) + (n - right) );
            } 
            if (sumLeft <= sumRight) {
                left++;
                sumLeft += w[left];
            } 
            else {
                right--;
                sumRight += w[right];
            }
        }

        cout << maxCandies << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while(t--)
       solve();
    return 0;
}
