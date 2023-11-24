#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 1;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            cnt++;
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}