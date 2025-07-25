/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

string sequenceMatch(ll m, vector<ll> &p){
    string result ="";
    for(ll i=0;i<(ll)p.size();i++){
       result += char(__builtin_popcountll(m+i));           
    }
    return result;
}

void solve() {
    ll n;
    cin >> n;

    vector<ll>p(n);
    string target ="";
    for(ll i=0;i<n;i++){
        cin>>p[i];
        target += char(p[i]);
    }

    bool found = false ;
    for(ll m=0;m<=1e5 ;m++){
        if(sequenceMatch(m,p)==target){
            found = true;
            break;
        }
    }

    cout << (found ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}

*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

bool sequenceMatch(ll m, vector<ll> &p){
    for(ll i=0;i<(ll)p.size();i++){
        if(__builtin_popcountll(m+i) != p[i]){
            return false;
        }
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;

    vector<ll>p(n);
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }

    bool found = false ;
    for(ll m=0;m<=2e6 ;m++){
        if(sequenceMatch(m,p)){
            found = true;
            break;
        }
    }

    cout << (found ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
