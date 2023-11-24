#include <iostream>
using namespace std;

int sum(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int n;
    cin >> n;
    int level = 0;
    while (1)
    {
        n = n - sum(level + 1);
        if (n >= 0)
            level++;
        else
            break;
    }
    cout << level << endl;

    return 0;
}