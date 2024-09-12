#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int x = abs(a - b);
        int y = abs(b - c);
        int z = abs(a - c);
        
        int max_diff = max(x, max(y, z));
        cout << max_diff << endl;
    }

    return 0;
}
