// C++ code 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> d(n);
        for (int i = 0; i < n; ++i) {
            cin >> d[i];
        }

        
        sort(d.begin(), d.end());

        
        if (d[n-1] - d[n-2] >= 2 || d[n-1] == d[n-2]) {
            cout << "Ambiguous" << endl;
        } else {
            cout << d[n-2] << endl;
        }
    }
    return 0;
}


// Kotline language code
import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    repeat(t) {
        val n = scanner.nextInt()
        val d = IntArray(n) { scanner.nextInt() }

        d.sort()

        if (d[n - 1] - d[n - 2] >= 2 || d[n - 1] == d[n - 2]) {
            println("Ambiguous")
        } else {
            println(d[n - 2])
        }
    }
}
