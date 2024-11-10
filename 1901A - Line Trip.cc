#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int end=0,sum=0;
        for(int i=0;i<n;i++){
            sum=max(sum,a[i]-end);
            end=a[i];
        }
        sum =max(sum,2*(x-end));
        cout<<sum<<endl;
        

    }
    return 0;
}
