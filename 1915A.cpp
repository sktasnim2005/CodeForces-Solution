#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
      int a,b,c;
      cin>>a>>b>>c;

    if(a==b){
           cout<<c<<endl;
      }
      if(b==c){
        cout<<a<<endl;
      }
      if(c==a){
        cout<<b<<endl;
      }


    }

    return 0;
}


 
