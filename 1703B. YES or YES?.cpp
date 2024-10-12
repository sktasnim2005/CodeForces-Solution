#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0;
        int solved[26]={0};

        for (char c : s) {
            if(solved[c-'A']==0){
                count+=2;
                solved[c-'A']=1;
                }
            else{
              count+=1;
            }
        }


       cout<<count<<endl;
    }
    return 0;
}
