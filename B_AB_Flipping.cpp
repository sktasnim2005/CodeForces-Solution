#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string


void solve() {
    ii n;
    ss s;
    cin >> n >> s;

    ii left = 0, right = n-1;
    while(left<right && s[left]== 'B'){
        left++;
    }
    while(left<right && s[right]== 'A'){
        right--;
    }

    cout<< max(0,right-left) << endl;
    



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
