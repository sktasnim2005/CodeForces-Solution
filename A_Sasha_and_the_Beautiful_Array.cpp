#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n;
    cin >> n;

    vector<ii>a(n);

    for(ii i=0;i<n;i++){
        cin>> a[i];
    }

    int max_Val = *max_element(a.begin(),a.end());
    int min_Val = *min_element(a.begin(),a.end());

    //cout <<"max = " << max_Val << endl;
    //cout << "min = " << min_Val << endl;

    cout << max_Val - min_Val << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;while (t--)
     solve();
    return 0;
}
