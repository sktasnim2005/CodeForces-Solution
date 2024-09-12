#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
      int ara[4];

      for(int i=0;i<4;i++){
        cin>>ara[i];
      }
      int a=max(ara[0],ara[1]);
      int b=max(ara[2],ara[3]);

      sort(ara,ara+4);
      int x=ara[2];
      int y=ara[3];
      if((a==x && b==y )||(a==y && b==x)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }


    return 0;
}

 
