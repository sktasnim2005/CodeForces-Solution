#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>ans(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
      ans[a[i]-1]=i+1;
    }
    for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
    }

    return 0;
}
