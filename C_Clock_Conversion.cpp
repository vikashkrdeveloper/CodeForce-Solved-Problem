#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int hh = stoi(s.substr(0, 2));
        string mm = s.substr(3, 2);

        string period = (hh >= 12) ? "PM" : "AM";

        if (hh == 0)
            hh = 12;
        else if (hh > 12)
            hh -= 12;

        printf("%02d:%s %s\n", hh, mm.c_str(), period.c_str());
    }
    return 0;
}
