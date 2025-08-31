#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ii x,y;    
    cin >> x >> y;

    ii count = 0;

    if(y==0 && x==0){
        cout << 0 << endl;
    }
    else if(y==0 && x>0){
        while(x>0){
            x-=15;
            count++;
        }
        cout << count << endl;
    }
    else if(x==0 && y>0){
        while(y>0){
            y-=2;
            count++;
        }
        cout << count << endl;
    }
    else{
        while(y>0 || x>0){
            if(y>=2){
                y-=2;
                x-=7;
            }
            else if(y==1){
                y-=1;
                x-=11;
            }
            else{
                x-=15;
            }
            count++;
        }
        cout << count << endl;
    }





}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
