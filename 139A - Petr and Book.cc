#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(7);
    for (int i = 0; i < 7; ++i) {
        cin >> arr[i];
    }

    int sum = 0,ans=0;

    while (sum < n) {
        for (int i = 0; i < 7; ++i) {
            sum += arr[i];
            if (sum >= n) {
                ans = i + 1;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
