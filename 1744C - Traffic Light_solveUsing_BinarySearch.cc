#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char c;

        cin >> n >> c;

        string str;
        cin >> str;

        str += str;

        vector<int> g_positions;
        for (int i = 0; i < 2 * n; i++)
        {
            if (str[i] == 'g')
            {
                g_positions.push_back(i);
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == c)
            {
                auto it = lower_bound(g_positions.begin(), g_positions.end(), i);
                if (it != g_positions.end())
                {
                    ans = max(ans, *it - i);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
