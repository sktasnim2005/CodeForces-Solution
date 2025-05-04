#include "bits/stdc++.h"

using namespace std;

void solve() {
    string hand;
    cin>>hand;
    vector<string> card(5);
    for(int i=0; i<5; i++) {
        cin>>card[i];
    }
    bool Result = false;
    for(int i=0; i<5; i++) {
        if(card[i][0] == hand[0] || card[i][1] == hand[1]){
            Result = true;
            break;;
        }
    }
    cout<<(Result ? "YES":"NO")<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

	int t=1;
	//cin>>t;
	while (t--) {
		solve();
	}

    return 0;
}
