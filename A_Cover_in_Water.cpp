#include <bits/stdc++.h>
using namespace std;

int main() // ==>
{ // ==>
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int dots = 0;
        for (char c : s)
        {
            if (c == '.')
            {
                dots++;
            }
        }

        bool hasTriple = s.find("...") != string::npos;

        int ans = hasTriple ? 2 : dots;
        cout << ans << "\n";
    }
    return 0;
}
