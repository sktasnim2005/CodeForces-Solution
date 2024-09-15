#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
       int a,b,c;
      cin >> a >> b >> c;

      if ((2 * b - c > 0 && (2 * b - c) % a == 0) || ((a + c) % (2 * b) == 0) || (2 * b - a > 0 && (2 * b - a) % c == 0)) {
                cout << "YES" << endl;
      } 
      else {
          cout << "NO" << endl;
             }
      }

    return 0;
}
