#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
bool is_vowel(char c){
    return c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u';
}


void solve() {
    ss s;
    cin >> s;

    ii sl = s.size();

    for(ii i=0;i<sl;i++){
        char c = s[i];
        if(!is_vowel(c) && c != 'n'){
            if((i == sl - 1) || !is_vowel(s[i+1])){
                cout << "NO" << endl;
                return;
            }
        }
    }
 
    
    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  //  int t; cin >> t; while (t--)
    solve();
    return 0;
}
