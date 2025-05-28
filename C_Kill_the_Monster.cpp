#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double 


bool canWin(ll hC, ll dC, ll hM, ll dM, ll k, ll w, ll a) {
    for (ll i = 0; i <= k; ++i) {
        ll new_damage = dC + i * w;
        ll new_health = hC + (k - i) * a;

        ll turns_to_kill_monster = ceil((dd)hM / new_damage);
        ll turns_monster_can_attack = ceil((dd)new_health / dM);

        if (turns_to_kill_monster <= turns_monster_can_attack) {
            return true;
        }
    }
    return false;
}

void solve() {
    ll hC, dC, hM, dM, k, w, a;
    cin >> hC >> dC >> hM >> dM >> k >> w >> a;

    if (canWin(hC, dC, hM, dM, k, w, a)) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;while (t--)
     solve();
    return 0;
}
