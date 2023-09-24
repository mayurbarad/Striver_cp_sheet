#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int a1, b1, c1;

    a1 = (k * l) / nl;
    b1 = c * d;
    c1 = p / np;

    int res = min(a1, min(b1, c1));
    cout << res / n;

    return 0;
}