#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
   int q;
   cin>>q;
    while(q--){
        int m;
        cin >> m;
        int count = upper_bound(a.begin(), a.end(), m) - a.begin();
        cout << count << endl;
    }

    return 0;
}
