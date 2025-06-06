#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ss n;
    cin >> n;

    ss firstPart = "";
    ss secondPart ="";
    bool dotFound = false;

    for(char c: n){
        if(c=='.'){
            dotFound= true;
        }
        else if(!dotFound){
            firstPart += c;
        }
        else{
            secondPart += c;
        }
    }

    bool allZero = false;

    ii zerO = count(secondPart.begin(),secondPart.end(),'0');

    if(zerO == secondPart.size()){ 
        allZero = true;
    }
    
    if(!dotFound || allZero){
        cout<< "int " << firstPart << endl;
    }
    else{
        cout<< "float " << firstPart << " 0." << secondPart << endl;
    }

     

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
