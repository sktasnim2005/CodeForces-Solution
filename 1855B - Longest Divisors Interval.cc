#include "bits/stdc++.h"

using namespace std;

void solve() {
      long long  n;
      cin>> n;
      long long ans=1;
      for (long long i = 1; ; i++)
    {
        if (n % i != 0)
        {
            ans = i - 1;
            break;
        }
    }
	   cout<<ans<<endl;
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
