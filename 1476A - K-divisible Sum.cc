#include<bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    long long n, k;
    cin >> n >> k;
    
    long long cf = (n + k - 1) / k; //  the ceiling of n / k using integer arithmetic. It's a trick to compute ceil(n / k):
                                     //Adding k-1 ensures rounding up when n is not perfectly divisible by k.
    k *= cf;   //Multiplies k by the ceiling factor cf. This step ensures k is adjusted to a multiple that is at least as large as n.
    
    cout << (k + n - 1) / n << endl;//Here, (k + n - 1) / n calculates the ceiling of the adjusted k divided by n:

                                    // This determines the minimum number of times you need to sum n to reach or exceed the adjusted k.
  }
  return 0;
}
