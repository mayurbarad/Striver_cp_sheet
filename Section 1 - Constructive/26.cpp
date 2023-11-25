#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, ans = "";
    cin >> s;
    int i = 0;
    int len = 1;
    while (i < n)
    {
        ans.push_back(s[i]);
        i = i + len;
        len++;
    }
    cout << ans << endl;

    return 0;
}