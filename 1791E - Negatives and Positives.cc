#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        long long negative_num = 0, min_num = LLONG_MAX, sum = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] < 0)
                negative_num++;
            min_num = min(min_num, abs(a[i]));
            sum += abs(a[i]);
        }

        if(negative_num % 2 == 0) {
            cout << sum << endl;
        }
        else {
            cout << sum - 2 * min_num << endl;
        }
    }
}
