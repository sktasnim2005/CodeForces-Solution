#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n < m) {
        cout << -1 << endl;
        return 0;
    }

    int min_steps = (n + 1) / 2; // for round up min number

    while (min_steps % m != 0) { //smallest number of steps that is divisible by m
        min_steps++;
    }

    cout << min_steps << endl;
    return 0;
}
