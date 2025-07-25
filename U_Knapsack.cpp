#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

ii n,w; 
vector<ii>weight,value;

ii knapsack(ii i,ii remain_w){
    if(i == n || remain_w ==0){ 
        return 0;
    }

    if(weight[i]> remain_w){
        return knapsack(i+1,remain_w);
    }
    ii take = value[i] + knapsack(i+1, remain_w-weight[i]);
    
    ii not_take = knapsack(i+1, remain_w);

    return max(take,not_take);

}


void solve() {   
    cin >> n >> w;

    weight.resize(n);
    value.resize(n);

    for(ii i=0;i<n;i++){
        cin >> weight[i] >> value[i];
    }

    ii result = knapsack(0,w);
    cout << result << endl;
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
