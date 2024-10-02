#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<char> result;
    for (int i = 0; i < n; ++i) {
        if ((n - i) % 2 == 1) {
            result.push_back(s[i]);
        } 
        else {
            result.insert(result.begin(), s[i]);
        }
    }

    for (char c : result) {
        cout << c;
    }
    return 0;
}
