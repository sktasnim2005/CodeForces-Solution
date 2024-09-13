#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      int x=min(a,min(b,c));
      int y=max(a,max(b,c));
      int z=a+b+c-x-y;
      cout<<z<<endl;
    }

    return 0;
}
 
