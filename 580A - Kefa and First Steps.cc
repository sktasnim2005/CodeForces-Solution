#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max_count=0,current_count=0;
    for(int i=0;i<n;i++){
        if(a[i-1]<=a[i]){
         current_count++;
        }
        else{
           current_count=1;
        }
        max_count = max(max_count,current_count);
    }
    cout<<max_count<<endl;
    return 0;
}
