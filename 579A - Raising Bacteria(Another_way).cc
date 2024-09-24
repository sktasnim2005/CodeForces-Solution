
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int x,s=0;
    cin>>x;
    while(x>0){
      s+=x%2;
      x/=2;
    }
    cout<<s;


    return 0;
}
