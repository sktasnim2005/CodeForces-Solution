#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int x=a[0];
        int y=a[n-1];
        cout<<(n-1)*(y-x)<<endl;


    }
    return 0;
}
