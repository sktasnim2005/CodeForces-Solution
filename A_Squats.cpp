#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ii n;
    ss s;
    
    cin >> n >> s;


    ii small_x =0 , big_x = 0; 
    for(char c: s){
        if(c == 'X') big_x++;
        if(c == 'x') small_x++;
    }

    if(small_x == big_x){
        cout << 0 << endl << s << endl;
        return;
    }

    ii change =0;

    while (small_x != big_x){
        if(small_x > big_x){
            for(ii i=0;i<n;i++){
                if(s[i]== 'x'){
                    s[i]='X';
                    small_x--;
                    big_x++;
                    change++;
                    break;
                }
            }
        }
       else{
            for(ii i=0;i<n;i++){
                if(s[i]== 'X'){
                    s[i]='x';
                    small_x++;
                    big_x--;
                    change++;
                    break;
                }
            }
        }
    }

    cout << change << endl << s << endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
