#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n;
    cin >> n;
    vector<ii> a(n);
    for(ii i = 0; i < n; i++) {
        cin >> a[i];
    }

    ii left = 0, right = n - 1;
    ii ope = 0;

    while(left < right){
        if(a[left] == 0){
            left++;
        } 
        else {
            if(a[right] == 1){
                right--;
            } 
            else {
                ope++;
                left++;
                right--;
            }
        }
    }

    cout << ope << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ii t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
