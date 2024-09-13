#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n ;
        string s;
        cin>>s;
        int count=0;
        for(char c:s){
          if(c=='U')count++;
        }

        if(count%2==0){
          cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
        }


    }
    return 0;
}
 
