#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void dfs(ii i, vector<vector<ii>> &adjList ,vector<bool> &visitedVertex){
    visitedVertex[i] = true;
    for(auto it : adjList[i]){
        if(!visitedVertex[it]){
            dfs(it,adjList,visitedVertex);
        }
    }
}


void solve() {
    ii v,e;
    cin >> v >> e;    

    vector<vector<ii>> adjList(v+1);

    vector<bool> visitedVertex(v+1,false);
    

    for(ii i=0;i<e;i++){
       ii u,v;
       cin >> u >> v;
       adjList[u].push_back(v);
       adjList[v].push_back(u);       
    }


    ii group = 0;

    for(ii i=1;i<=v;i++){
        if(!visitedVertex[i]){
            dfs(i,adjList,visitedVertex);
            group++;
        }
    }

    cout << group << endl;    
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);    
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
