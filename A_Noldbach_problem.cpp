#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false; 
    for (int j = 2; j <= sqrt(x); j++) {
        if (x % j == 0)
            return false;
    }
    return true;
}


void solve() {
    int n,k;
    cin >> n >> k;

    vector<int>primes;

    int countPrime=0;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            primes.push_back((i));
        } 
    }
    int l= primes.size();
    for(int i=0;i<l-1;i++){
        int x = primes[i]+primes[i+1]+1;
        
        if(x <= n && isPrime((x))){
            countPrime++;
        }
    }
    cout << (countPrime>=k ? "YES" :"NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
