#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {   
    ii n;
    cin >> n;

    ii countOne=0;
    ii temp = n;

    while(temp>0){
        if(temp%2==1){
            countOne++;
    }
        temp/=2;
    }

    ii result = pow(2,countOne)-1;

    cout << result << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
