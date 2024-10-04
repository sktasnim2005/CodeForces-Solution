#include <iostream>
using namespace std;

int removeZeros(int num) {
    int result = 0;
    int factor = 1;
    while (num > 0) {
        int digit = num % 10; // Get the last digit
        if (digit != 0) { // If the digit is not zero
            result += digit * factor; // Add it to the result
            factor *= 10; // Move to the next place value
        }
        num /= 10; // Remove the last digit
    }
    return result;
}

int main() {
    int s1, s2;
    cin >> s1 >> s2;

    int sum = s1 + s2;
    int y = removeZeros(sum);

    int s1NoZeros = removeZeros(s1);
    int s2NoZeros = removeZeros(s2);
    int sum2 = s1NoZeros + s2NoZeros;

    if (y == sum2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
