#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {
    ss s,t;
    cin >> s >> t;

    // while checking a string cant be empty so -1
    ii sl = s.size()-1;
    ii tl = t.size()-1;

    ii commonSize = 0;

    while(sl >=0 && tl >=0 && s[sl]==t[tl]){
        commonSize++;
        sl--;
        tl--;
    }
 
    // sum of the given two string and remode the common part , i need to remove it from both so 
    ii result = s.size() + t.size()- 2*commonSize; 
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  //  int t; cin >> t; while (t--)
    solve();
    return 0;
}
