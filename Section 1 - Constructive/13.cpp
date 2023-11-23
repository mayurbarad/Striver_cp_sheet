#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    int ans = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        temp = temp - a + b;
        ans = max(ans, temp);
    }
    cout << ans << endl;
    return 0;
}