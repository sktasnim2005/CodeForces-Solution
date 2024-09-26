#include <iostream>
#include<cmath>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x ;
        cout<<(long long)ceil(x/2.0)<<endl;
    }
    return 0;
}
