#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> restaurants = {1, 2, 3, 4, 5};
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    // Remove the visited restaurants
    restaurants.erase(a);
    restaurants.erase(b);
    restaurants.erase(c);
    restaurants.erase(d);
    
    // The remaining number in the set is the restaurant to visit on Friday
    cout << *restaurants.begin() << endl;
    
    return 0;
}
