#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool ans = false;
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++) {
        if (arr[i] + arr[i + 1] > arr[i + 2]) {
            ans = true;
            break;
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
