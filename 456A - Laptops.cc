#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
     vector<pair<int, int>> laptops(t);
     bool happy=false,poor=false;
    for (int i = 0; i < t; ++i) {
        cin >> laptops[i].first >> laptops[i].second;
    }
    sort(laptops.begin(),laptops.end());
    for (int i = 0; i < t - 1; ++i) {
        if (laptops[i].first < laptops[i + 1].first && laptops[i].second > laptops[i + 1].second) {
            happy = true;
            poor = true;
        }
    }
    if(happy && poor ){
      cout<<"Happy Alex"<<endl;
    }
    else{
      cout<<"Poor Alex"<<endl;
    }

    return 0;
}
