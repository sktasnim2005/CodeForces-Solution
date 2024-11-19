#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
    int n;
    cin >> n;
    vector<int> v(n), res;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

      res.push_back(v[0]); // Add the first element to the result
      for (int i = 1; i < n; i++) {
          if (v[i - 1] > v[i]) {
              res.push_back(v[i]);   // Push current element
              res.push_back(v[i]);   // Push current element again
          }
          else {
              res.push_back(v[i]);   // Push current element
          }
      }

    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
   }
    return 0;
}
