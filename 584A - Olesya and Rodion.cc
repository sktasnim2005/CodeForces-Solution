#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    if (n == 1 && t == 10) {
        cout << -1 << endl;
    }
    else {
        if (t == 10) {
            cout << 1;
            int i = 1;
            while (i < n) {
                cout << 0;
                i++;
            }
        } 
        else {
            cout << t;
            int i = 1;
            while (i < n) {
                cout << 0;
                i++;
            }
        }
        cout << endl;
    }

    return 0;
}
