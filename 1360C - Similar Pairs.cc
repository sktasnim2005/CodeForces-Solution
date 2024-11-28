#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int odd_count = 0, even_count = 0;

      for (int x : a) {
          if (x % 2 == 0) {
              even_count++;
          }
          else {
              odd_count++;
          }
      }
        sort(a.begin(),a.end());
        bool ans = false;
        if (odd_count % 2 == 0 && even_count % 2 == 0) {
            ans = true;
        }
        else{
                  sort(a.begin(),a.end());
                  for (int i = 0; i < a.size(); ++i) {
                          if (abs(a[i] - a[i-1]) == 1) {
                              ans= true;
                              break;
                          }
                      }
        }
        if (ans) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
