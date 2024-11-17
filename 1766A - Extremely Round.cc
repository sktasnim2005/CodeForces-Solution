#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int sum = 0;

        while (x >=10) {
            x/=10;
            sum+=9;
        }
        
        cout << x+sum << endl;
    }

    return 0;
}
