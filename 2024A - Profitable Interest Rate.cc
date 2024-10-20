#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a>>b;
        if(a>b){
          cout<<a<<endl;
        }
        else{
          int x= a - abs(a-b);
          if(x>0){cout<<x<<endl;}
          else{cout<<0<<endl;}
        }


    }
    return 0;
}
