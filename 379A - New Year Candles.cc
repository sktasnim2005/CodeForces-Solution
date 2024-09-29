#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int time = a;
    int rem = a;

    while (rem >= b) {
        int additional = rem / b;
        time += additional;
        rem = rem % b + additional;
    }

    cout << time << endl;

    return 0;
}
