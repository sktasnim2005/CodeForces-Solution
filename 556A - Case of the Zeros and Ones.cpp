#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count0=0,count1=0;
     for(int i=0;i<n;i++){
        if(s[i]=='0'){count0++;}
        if(s[i]=='1'){count1++;}
     }
     cout<<abs(count1-count0);
    return 0;
}



