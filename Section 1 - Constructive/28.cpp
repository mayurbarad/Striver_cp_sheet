#include <iostream>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

bool vowel(char c)
{
    string s = "AEIOUYaeiouy";
    for (auto ch : s)
        if (ch == c)
            return true;
    return false;
}

int main()
{
    string s;
    cin >> s;
    string ans = "";

    for (auto c : s)
    {
        char ch = tolower(c);
        if (!isVowel(ch))
        {
            ans.push_back('.');
            ans.push_back(ch);
        }
    }
    cout << ans << endl;
    return 0;
}