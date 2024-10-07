#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a, b;
        cin >> a >> b;
        
        // The maximum number of shovels and swords that can be made
        int result = min({a, b, (a + b) / 3});
        
        cout << result << endl;
    }
    return 0;
}
