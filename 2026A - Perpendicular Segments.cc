#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int X, Y, K;
        cin >> X >> Y >> K;

        int p=min(X,Y);
        int Ax = 0, Ay = 0, Bx = p, By = p;
        int Cx = 0, Cy = p, Dx = p, Dy = 0;



        cout << Ax << " " << Ay << " " << Bx << " " << By << endl;
        cout << Cx << " " << Cy << " " << Dx << " " << Dy << endl;
    }

    return 0;
}
