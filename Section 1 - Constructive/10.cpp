#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp, i;

    for (i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            cout << "HARD" << endl;
            break;
        }
    }
    if (i == n)
        cout << "EASY" << endl;

    return 0;
}