#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

ii smallestDivisor(ii x){
    for(ii i=2;i*i <=x ;i++){
        if(x%i ==0){
            return i;
        }
    }

    return x;
}

void solve() {
    ll n,k;
    cin >> n >> k;

    ii f = smallestDivisor(n);

    //  Step 1: First time, add the smallest divisor of n
    // int f = smallestDivisor(n);
    // n += f;
    // --k;  // One operation done

    // Step 2: For remaining k times, keep adding 2 (since n is now even)
    // n += k * 2;

    cout << n + f + (k-1)*2 << endl;

    
   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}