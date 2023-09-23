#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        int a = s[i] - '0'; // convert string to int (ascii)
        if (i == 0 && a > 4 && a != 9)
            s[i] = (9 - a) + '0'; // convert int to string to store
        else if (i > 0 && a > 4)
            s[i] = (9 - a) + '0';
    }
    cout << s;

    return 0;
}