#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x;
    while (t--)
    {
        cin >> x;
        int digit = x % 10;
        int res = 0;
        res = (digit - 1) * 10;
        int num = digit;
        int i = 1;
        while (num <= x)
        {
            res = res + i;
            i++;
            num = num * 10 + digit;
        }
        cout << res << endl;
    }
    return 0;
}