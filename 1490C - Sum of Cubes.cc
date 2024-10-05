#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        bool found = false;
        unordered_set<long long> cubes;
        
        for (long long i = 1; i * i * i <= x; ++i) {
            cubes.insert(i * i * i);
        }
        
        for (long long i = 1; i * i * i <= x; ++i) {
            if (cubes.count(x - i * i * i)) {
                found = true;
                break;
            }
        }
        
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
