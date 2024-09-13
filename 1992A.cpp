#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        
        a = min(a, 10);
        b = min(b, 10);
        c = min(c, 10);

        int maxP = 0;
        for (int i = 0; i <= 5; ++i) {
            for (int j = 0; j <= 5 - i; ++j) {
                int k = 5 - i - j;
                maxP = max(maxP, (a + i) * (b + j) * (c + k));
            }
        }

        cout << maxP << endl;
    }

    return 0;
}
