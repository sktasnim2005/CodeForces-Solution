#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x ;
        if(360%(180-x)==0){// i am using this because it is the formula 
          cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
    }
    return 0;
}