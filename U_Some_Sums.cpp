#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

ii sum_digit(ii x){
    ii total=0;
    while(x){
        total+= x%10;
        x/=10;
    }
    return total;
}

void solve() {   
    ii n,a,b;
    cin >> n >> a >> b;

    ii sum=0;

    for(ii i=1;i<=n;i++){
        ii digitSum = sum_digit(i);
        if(digitSum >=a && digitSum<=b){
            sum += i;
        }
    }

    cout << sum << endl;
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
