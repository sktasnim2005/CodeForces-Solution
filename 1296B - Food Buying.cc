#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s;
        cin >> s;
        int tSpend=0;
        while(s>=10){
          int spend=(s/10)*10;
          tSpend+=spend;
          s=s-spend+(spend/10);
        }
        tSpend+=s;
        cout<<tSpend<<endl;
    }
    return 0;
}
