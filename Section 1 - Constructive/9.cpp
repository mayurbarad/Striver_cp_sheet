#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int minIndex = 0;
    int maxIndex = 0;
    int minEle = INT_MAX;
    int maxEle = INT_MIN;
    int ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxEle)
        {
            maxEle = arr[i];
            maxIndex = i;
        }
        if (arr[i] <= minEle)
        {
            minEle = arr[i];
            minIndex = i;
        }
        }
    ans = ((n - 1) - minIndex) + maxIndex;
    if (minIndex < maxIndex)
    {
        ans--;
    }
    cout << ans << endl;

    return 0;
}