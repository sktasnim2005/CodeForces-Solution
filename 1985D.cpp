#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m));


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        int maxRow = -1;
        int maxCount = 0;


        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '#') {
                    count++;
                }
            }
            if (count > maxCount) {
                maxCount = count;
                maxRow = i;
            }
        }


            vector<int> positions;
            for (int j = 0; j < m; j++) {
                if (a[maxRow][j] == '#') {
                    positions.push_back(j);
                }
            }
            int middleIndex = positions.size() / 2;
          cout << maxRow +1<<" "<< positions[middleIndex] +1<< endl;

    }
    return 0;
}
