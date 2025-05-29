#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

// Remove 1 A and 1 B  Or remove 1 B and 1 C so if b == a+c then its possible to empty the string  

void solve() {
    ss s;
    cin >> s;

    int a = count(s.begin(),s.end(),'A');
    int b = count(s.begin(),s.end(),'B');
    int c = count(s.begin(),s.end(),'C');
    
    cout<< (b == a+c ? "YES" : "NO")<<endl;        
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
