#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s1(m, '#');
    string s2(m, '.');

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            cout << s1 << endl;
        else
        {
            if (flag == 0)
            {
                s2[0] = '.';
                s2[m - 1] = '#';
            }
            else
            {
                s2[0] = '#';
                s2[m - 1] = '.';
            }
            flag = 1 - flag;
            cout << s2 << endl;
        }
    }

    return 0;
}