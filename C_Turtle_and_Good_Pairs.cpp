#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {
    ii n;
    ss s;
    cin >> n >> s;

    sort(s.begin(),s.end());

    ii left =0, right = n-1;

    ss ans = "";

    while(left<=right){
        ans += s[left];
        if(left != right)ans += s[right];
        left++;
        right--;

    }
    

    cout << ans << endl;
    
    

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
