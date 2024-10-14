#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int l1 = s1.length();
        int l2 = s2.length();
        int  count =0;
        for(int i=0;i<min(l1,l2);i++){
          if(s1[i]==s2[i]){
            count++;
          }
          else{
            break;
          }
        }
        int result = count + l1+l2 -(2*count );
        if(count!=0){
           result++;
        }

        cout <<result << endl;
    }
    return 0;
}
