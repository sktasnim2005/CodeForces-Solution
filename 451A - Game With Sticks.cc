#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n>>m;
     int x=min(n,m);
     if(x%2==0){
          cout<<"Malvika";
    }
    else{
          cout<<"Akshat";
    }

    return 0;
}
