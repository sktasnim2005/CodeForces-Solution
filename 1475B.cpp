#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        if(n >= 2020 && (n % 2020 <= n / 2020)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
