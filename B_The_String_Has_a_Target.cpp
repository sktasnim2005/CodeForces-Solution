#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n;
    ss s;
    cin >> n >> s;

    char minChar = s[0];
    int index = 0;

    for (ii i = 0; i < n; i++) {
        if(s[i] <= minChar){
            minChar=s[i];
            index=i;
        }
        
    }

    cout << s[index];
    for(ii i=0;i<index;i++){
        cout<<s[i];
    }
    for(ii i=index+1 ;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
