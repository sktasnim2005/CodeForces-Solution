#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

//উদাহরণ: n = 5 → output = 5 1 2 3 4
//Check:
//
//i = 2 → max(5,1) % 2 = 5 % 2 = 1 == 1 ✅
//
//i = 3 → max(1,2) % 3 = 2 % 3 = 2 == 2 ✅
//
//i = 4 → max(2,3) % 4 = 3 % 4 = 3 == 3 ✅
//
//i = 5 → max(3,4) % 5 = 4 % 5 = 4 == 4 ✅

void solve() {
    
    ii n;
    cin >> n;

    if(n%2==0){
        cout << -1 << endl;
        return;
    }

    cout << n << " ";

    for(ii i=1;i<n;i++){ 
        cout << i << " " ;   
    }
    cout << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}