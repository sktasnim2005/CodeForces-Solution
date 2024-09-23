#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
      int x=a*b*c;
      int y=a+b+c;
      int z=(a+b)*c;
      int p=a*(b+c);
      int q=a+(b*c);
      int r=(a*b)+c;
      int out=max({x,y,z,p,q,r});
      cout<<out;


    return 0;
}
