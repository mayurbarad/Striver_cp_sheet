
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v(26, 0);
    for (auto ch : s)
    {
        v[ch - 'a']++;
    }

    int cnt = 0;
    for (auto i : v)
    {
        if (i != 0)
            cnt++;
    }

    if (cnt % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}