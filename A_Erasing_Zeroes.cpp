#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ss s;
    cin >> s;

    ii first = -1, last = -1;

    for(ii i=0; i<s.size(); i++) {
        if(s[i] == '1'){
            if(first==-1){
                first= i;
            }
            else{
                last= i;
            }
        }
    }

    if(first == -1){
        cout<< 0 << endl;
        return;
    }

    ii count_Zero=0;
    for(ii i=first;i<last;i++){
        if(s[i]=='0'){
            count_Zero++;
        }
    }
    cout<< count_Zero <<endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
