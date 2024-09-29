#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int Anton = 0, Danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            Anton++;
        else
            Danik++;
    }
    if (Anton > Danik)
        cout << "Anton";
    else if (Danik > Anton)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}
