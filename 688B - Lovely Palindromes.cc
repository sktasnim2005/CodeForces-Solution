#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout<<s;
    int length=s.size();
    char ch;
    int i,j;
    for (i=0,j=length-1;i<=length/2,j>=length/2;i++,j--) {
        ch=s[i];
        s[i]=s[j];
        s[j]=ch;

    }
    cout<<s;
    return 0;
}
