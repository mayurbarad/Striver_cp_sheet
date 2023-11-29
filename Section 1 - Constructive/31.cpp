#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[7];
    int i = 0;

    for (int i = 0; i < 7; i++)
        cin >> a[i];

    while (n > 0)
    {
        n = n - a[i];
        if (n <= 0)
            break;
        i++;
        i = i % 7;
    }

    cout << i + 1 << endl;
    return 0;
}