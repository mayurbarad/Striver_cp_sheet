#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, n;
    while (t--)
    {
        cin >> a >> b >> n;
        int cnt = 0;
        while (a <= n && b <= n)
        {
            int sum = a + b;
            if (a < b)
                a = sum;
            else
                b = sum;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}