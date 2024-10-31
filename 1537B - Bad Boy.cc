#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,m, i,j;
        cin >> n >> m >> i >> j ;
        if((i==1 && j== 1) || (i==n && j==m)){
          cout<<1<< " "<<m<<" "<<n<< " "<<1<<endl;
        }
        else{
          cout<<1<< " "<<1<<" "<<n<< " "<<m<<endl;
        }
    }

    return 0;
}
