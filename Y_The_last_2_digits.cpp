#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    
    long long result = (A % 100)*(B%100)*(C%100)*(D%100)%100;
 
    if(result<10){
        cout << 0 << result << endl;
    }
    else{
        cout << result << endl;
    }
    


    return 0;
}
