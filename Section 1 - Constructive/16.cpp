#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    while (1)
    {
        a = 3 * a;
        b = 2 * b;
        cnt++;
        if (a > b)
            break;
    }
    cout << cnt << endl;
    return 0;
}