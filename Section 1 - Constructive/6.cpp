// #include <iostream>
// #include <vector>
// #include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int pw = 1;
        while (n > 0)
        {
            int ld = n % 10;
            if (ld != 0)
            {
                v.push_back(ld * pw);
            }
            n = n / 10;
            pw = pw * 10;
        }
        cout << v.size() << endl;
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}