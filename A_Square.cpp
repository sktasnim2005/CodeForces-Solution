#include "bits/stdc++.h"

using namespace std;

void solve() {
    int a,b,c,d,e,f,g,h;
    cin>> a>>b>>c>>d>>e>>f>>g>>h;
    int x=0;
    if (a == c ){
        x = abs(b-d);
    }
    if (a == e ){
        x = abs(b-f);
    }
    if (a == g ){
        x = abs(b-h);
    }

    cout<< x*x <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

	int t;
	cin>>t;
	while (t--) {
		solve();
	}

    return 0;
}
