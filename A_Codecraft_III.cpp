#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ss s;
    ii n;
    cin >> s >> n;

    ii x= 0;

    if(s== "January") x=1;
    else if(s== "February") x = 2;
    else if(s== "March") x = 3;
    else if(s== "April") x = 4;
    else if(s== "May") x = 5;
    else if(s== "June") x = 6;
    else if(s== "July") x = 7;
    else if(s== "August") x = 8;
    else if(s== "September") x = 9;
    else if(s== "October") x = 10;
    else if(s== "November") x = 11;
    else if(s== "December") x = 12;

    ii y = x+ n;
    ii z = y%12;

    if(z== 1) cout << "January" << endl;
    else if(z == 2 ) cout << "February" << endl;
    else if(z == 3 ) cout << "March" << endl;
    else if(z == 4 ) cout << "April" << endl;
    else if(z == 5 ) cout << "May" << endl; 
    else if(z == 6 ) cout << "June" << endl;
    else if(z == 7 ) cout << "July" << endl;
    else if(z == 8 ) cout << "August" << endl;
    else if(z == 9 ) cout << "September" << endl;
    else if(z == 10 ) cout << "October" << endl;
    else if(z == 11 ) cout << "November" << endl;
    else if(z == 0 ) cout << "December" << endl;
   
       


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
