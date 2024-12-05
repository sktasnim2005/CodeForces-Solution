#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin>>t;
        while(t--){
          map<int,int> mapp;
          int n;
          cin>>n;
          long long ans=0;
          for(int i=0;i<n;i++){
            int x;
            cin>>x;
            x-=i;
            ans+=mapp[x];
            mapp[x]++;
          }

          cout<<ans<<endl;

        }
	return 0;
}
