#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        arr[temp] = i;
    }
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";

    return 0;
}