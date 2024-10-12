#include <iostream>
#include <vector>
using namespace std;

int findUniqueIndex(const vector<int>& arr) {
    if (arr[0] != arr[1] && arr[0] != arr[2]) {
        return 0;
    }
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] != arr[0]) return i;
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ara(n);
        for (int i = 0; i < n; ++i) {
            cin >> ara[i];
        }

        cout << findUniqueIndex(ara) + 1 << endl;
    }
    return 0;
}
