#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;

    string num = to_string(n);

    if (n >= 0) {
        cout << n << endl;
    } 
    else {
        // Remove the first digit and check
        string option1 = num.substr(0, num.size() - 1);

        // Remove the second last digit and check
        string option2 = num.substr(0, num.size() - 2) + num[num.size() - 1];

        // Convert the options back to integers to compare
        long long result1 = stoll(option1);
        long long result2 = stoll(option2);

        // Output the maximum of the two options
        cout << max(result1, result2) << endl;
    }

    return 0;
}
