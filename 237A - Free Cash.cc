#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[24][60] = {0}; 
    int a, b;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        arr[a][b]++;
        if (arr[a][b] > count) {
            count = arr[a][b];
        }
    }

    cout << count << endl;

    return 0;
}

\\ Another way

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> times(n);

    for (int i = 0; i < n; ++i) {
        cin >> times[i].first >> times[i].second;
    }

    sort(times.begin(), times.end());

    int count = 1;
    int max_count = 1;

    for (int i = 1; i < n; ++i) {
        if (times[i] == times[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count > max_count) {
            max_count = count;
        }
    }

    cout << max_count << endl;

    return 0;
}
