#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> letters;
    for (int i = 0; i < n; ++i)
    {
        letters.insert(tolower(s[i]));
    }
    if (letters.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
return 0;
}
