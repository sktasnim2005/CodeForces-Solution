#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

vector<ss>lucky_num;

void lucky(ss s, ll four, ll seven, ll len) {
    if (s.size() == len) {
        if (four == seven)
            lucky_num.push_back(s);
        return;
    }

    lucky(s + '4', four + 1, seven, len);
    lucky(s + '7', four, seven + 1, len);
}

void solve() {    
    ss n;
    cin >> n;

    ll len = n.size();
    bool found = false;

    while (!found) {
        lucky_num.clear();
        lucky("", 0, 0, len);

        sort(lucky_num.begin(), lucky_num.end());
        for (auto& i : lucky_num) {
            if (i >= n) {
                cout << i << endl;
                found = true;
                break;
            }
        }

        len++;
    }


    
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
