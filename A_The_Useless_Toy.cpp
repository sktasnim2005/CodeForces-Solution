#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {

    unordered_map<char, ii> mapp = {{'^',0},{'>',1},{'v',2},{'<',3}};

    char start_char, end_char;
    cin >> start_char >> end_char;

    ll n;
    cin >> n;

    ii start = mapp[start_char];
    ii end = mapp[end_char];

    bb cw = (start+n)%4 == end;
    bb ccw = ((start-n)%4 + 4)%4 == end; 
    
    if(cw && !ccw) cout << "cw" << endl;
    else if(!cw && ccw) cout << "ccw" << endl;
    else cout << "undefined" << endl;
        


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
