#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    dd a,b,c,d;
    
    cin >> a >> b >> c >> d;

    // insted of pow(a,b) we can write b *log(a) , taking log in both side  a^b > c^d

    dd x = b*log(a);

    dd y = d*log(c);

    if(x > y){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" << endl;
    }
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
