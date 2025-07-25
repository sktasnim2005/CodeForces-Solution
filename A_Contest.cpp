#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() { 
    ll a,b,c,d;  
    cin >> a >> b >> c >> d;

    ll misha = max((3*a)/10 , a - (a*c)/250);
    
    ll vasya = max((3*b)/10 , b - (b*d)/250);

   
    if(misha>vasya){
        cout << "Misha" << endl;
    }
    else if(misha<vasya){
        cout << "Vasya" << endl;
    }
    else{
        cout << "Tie" << endl;
    }
   

        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
