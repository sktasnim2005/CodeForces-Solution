#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> cars(n);
        long long sum = 0;
        int mx=0;

        for (int i = 0; i < n; ++i) {
            cin >> cars[i];
            sum += cars[i];
            mx=max(mx,cars[i]);
        }

        cout<< max((sum + x - 1) / x, 1LL*mx)<<endl;  // Ceiling division to ensure we cover all cars

    }

    return 0;
}


......................

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, r;
		cin >> n >> r;
		long long ans = 0, s = 0;
		for(int i = 0; i < n; i++){
			long long a;
			cin >> a;
			ans = max(ans, a);
			s += a;
		}
		s = (s + r - 1)/r;
		ans = max(ans, s);
		cout << ans << endl;
	}
}    
