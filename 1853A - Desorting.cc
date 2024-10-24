#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        if (is_sorted(a.begin(), a.end())){
            int minD = 1e9;
            for (int i = 1; i < n; i++){
                minD = min(minD, a[i] - a[i - 1]);
            }
            cout << (minD / 2) + 1<< endl;
        }
        else{
            cout << 0 << endl;
         }
    }
    return 0;
}
