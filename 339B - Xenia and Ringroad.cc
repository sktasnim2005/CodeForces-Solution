#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
      cin>>a[i];
    }
    long long Position=a[0]-1;
    int t=0;
    for(int i=0;i<m-1;i++){
      if(a[i]>a[i+1]){
        Position+=n-a[i] + a[i+1];
      }
      else if(a[i]<a[i+1]){
        Position+=a[i+1]-a[i];
      }
    }
     cout<<Position;
    return 0;
}

