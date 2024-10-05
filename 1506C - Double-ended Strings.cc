#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int max_common_length = 0;

        for (int i = 0; i < a.size(); ++i) {
            for (int j = 0; j < b.size(); ++j) {
                int length = 0;
                while (i + length < a.size() && j + length < b.size() && a[i + length] == b[j + length]) {
                    ++length;
                }
                max_common_length = max(max_common_length, length);
            }
        }

        int result = (a.size() - max_common_length) + (b.size() - max_common_length);
        cout << result << endl;
    }
    return 0;
}
