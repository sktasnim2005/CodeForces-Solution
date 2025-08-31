#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool


bb good(ss x){
    for(ii i=0;i<x.size()-1; i++){
        if(x[i] == x[i+1]){
            return false;
        }
    }
    return true;
}

void solve() {
    ii n,m;
    ss s,t;    
    cin >> n >> m >> s >> t;

    if(good(s)){
        cout << "Yes" << endl;
        return;
    }

    if(!good(t)){
        cout << "No" << endl;
        return;
    }

    for(int i=0 ; i<n-1 ; ++i) {
		if(s[i] == s[i+1]) {
			if(s[i] == t[0] || s[i+1] == t[m-1]) {
				cout << "No"<< endl;
				return;
			}
		}
	}
  

    cout << "Yes" << endl; 


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
