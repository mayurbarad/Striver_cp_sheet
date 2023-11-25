#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m;

    while (t--)
    {
        cin >> n >> m;
        int ans = 0;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        // Last row
        for (int i = 0; i < m - 1; i++)
        {
            if (v[n - 1][i] == 'D')
                ans++;
        }
        // Last Col
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i][m - 1] == 'R')
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
