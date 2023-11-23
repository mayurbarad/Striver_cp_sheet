#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans = "";
    int arr[3] = {0, 0, 0};
    for (auto c : s)
    {
        if (c == '1')
            arr[0]++;
        else if (c == '2')
            arr[1]++;
        else if (c == '3')
            arr[2]++;
    }
    for (int i = 0; i < 3; i++)
    {
        while (arr[i]--)
        {
            ans.push_back('+');
            ans.push_back(i + 1 + '0');
        }
    }
    ans = ans.substr(1);
    cout << ans << endl;
    return 0;
}