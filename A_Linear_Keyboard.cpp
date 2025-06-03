#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ss keyboard, word;
    cin >> keyboard >> word;

    map<char, int > position;
   
    for(ii i=0; i<keyboard.size(); i++) {
        position[keyboard[i]]=i;
    }

    ii total_time = 0;
    ii previous = position[word[0]];

    for(ii i=1; i<word.size(); i++) {
        ii current = position[word[i]];
        total_time += abs(current-previous);
        previous = current;
    }

    cout << total_time<< endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
