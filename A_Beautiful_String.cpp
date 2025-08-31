#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ss s;
    cin >> s;

    ii l = s.size();

    
    for(ii i=0;i<l-1;i++){
        if(s[i]==s[i+1] && s[i] !='?'){
            cout << -1 << endl;
            return;
        }
    }

    /*
    ss ans= s;
    for(ii i=0;i<l;i++){
        if(s[i] == '?'){
            char left = (i>0 ? ans[i-1] : 0);
            char right = (i<l-1 ? s[i+1]  : 0);
            
            if(left !='a' && right !='a') ans[i] ='a';
            else if(left !='b' && right !='b') ans[i] ='b';
            else if(left !='c' && right !='c')ans[i] ='c';

        }
        
    }

    cout << ans << endl;

    */
    for(ii i=0;i<l;i++){
        if(s[i] == '?'){
            for(char x : {'a','b','c'}){
                if((i==0 || s[i-1] != x) && (i==l-1 || s[i+1] != x)){
                    s[i] = x;
                    break;
                }
            }
        }
    }

    
   
    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
