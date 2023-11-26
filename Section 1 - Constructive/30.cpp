#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
            v.push_back(i + 1);
        vector<int> temp;
        while (v.size() > 1)
        {
            int s = v.size();
            int sum = v[s - 1] + v[s - 2];
            temp.push_back(v[s - 1]);
            temp.push_back(v[s - 2]);
            v.pop_back();
            v.pop_back();
            if (sum % 2 == 1)
                v.push_back(sum / 2 + 1);
            else
                v.push_back(sum / 2);
        }
        cout << v.back() << endl;
        for (int i = 0; i < temp.size(); i += 2)
        {
            cout << temp[i] << " " << temp[i + 1] << endl;
        }
    }
    return 0;
}