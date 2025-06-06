#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    dd d;
    cin >> d;
    
    
    if(d>=0 && d<=25.0){
        cout<< "Interval [0,25]" << endl;
    }
    
    else if(25.0 <d && d<=50.0){
        cout<< "Interval (25,50]" << endl;
    }

    else if(50.0 <d  && d<=75.0){
        cout<< "Interval (50,75]" << endl;
    }

    else if( 75 <d && d<=100.0){
        cout<< "Interval (75,100]" << endl;
    }
    
    else{
        cout << "Out of Intervals" << endl;
    }

     

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
