#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string t;
    cin >> t;
    string s = "";
    int i = 0;
    while (i < n)
    {
        char c = t[i];
        s += c;
        i += s.length();
    }
    cout << s << endl;
    return 0;
}
