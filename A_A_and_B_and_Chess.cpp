#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ii t=8;
    ss s;
    //ii queen = 9, rook = 5,bishop = 3, knight = 3, pawn = 1;
  
    ii white =0,black=0;

    for(ii i=0;i<t;i++){
        cin >> s;
        for(char c :s){
            if(c == 'q') black +=9; 
            if(c == 'r') black +=5;
            if(c == 'b') black +=3;
            if(c == 'n') black +=3;
            if(c == 'p') black +=1;

            if(c == 'Q') white +=9;
            if(c == 'R') white +=5;
            if(c == 'B') white +=3;
            if(c == 'N') white +=3;
            if(c == 'P') white +=1;
        }
    }


    if(white == black){ 
        cout << "Draw" << endl;
    }
    else{ 
        cout << (white>black ? "White" : "Black") << endl;
    }

   
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
