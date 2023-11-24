#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string temp;
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        if (temp[1] == s[1] || temp[0] == s[0])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}