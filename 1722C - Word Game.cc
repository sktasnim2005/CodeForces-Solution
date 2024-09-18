#include <iostream>
#include <map>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        map<string, int> count;
        string word[3][1000]; 

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> word[i][j];
                count[word[i][j]]++;
            }
        }

     
        int score[3] = {0, 0, 0};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                string words = word[i][j];
                if (count[words] == 1) {
                    score[i] += 3;
                }
                else if (count[words] == 2) {
                    score[i] += 1;
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            cout << score[i]<<" " ;
        }
        cout << endl;
    }
    return 0;
}
