#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n;
    string s;
    cin >> n >> s;

   
    for (int k = 1; k < n; k++) {
        string left  = s.substr(0,k);
        string right = s.substr(k,n-k);

        int left_L = count(left.begin(),left.end(),'L');
        int left_O = count(left.begin(),left.end(),'O');

        int right_L = count(right.begin(),right.end(),'L');
        int right_O = count(right.begin(),right.end(),'O');

        if(left_L != right_L && left_O != right_O){
            cout<< k << endl;
            return;
        }

    }
    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
