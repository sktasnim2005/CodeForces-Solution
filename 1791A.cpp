#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    set<char>codeforces={'c','o','d','e','f','r','s'};
    while (t--) {
        char c;
        cin >> c;


        if (codeforces.count(c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
 
