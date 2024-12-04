#include <bits/stdc++.h>
using namespace std;

int main() {
	      map<int,int> mapp;

        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
          int x;
          cin>>x;
          mapp[x]=i;
        }

        int m;
        cin>>m;
        long long first=0,second=0;
        for(int i=1;i<=m;i++){
          int y;
          cin>>y;
          first+=mapp[y];

          second+=n-mapp[y]+1;

        }

        cout<<first<<" "<<second;


	return 0;
}
