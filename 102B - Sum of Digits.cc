#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int steps = 0;

    while (s.size() > 1) {
        int sum = 0;
        for (char c : s) {
            sum += c - '0';
        }
        s = to_string(sum);
        steps++;
    }

    cout << steps << endl;
    return 0;
}
