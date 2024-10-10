#include <bits/stdc++.h>
using namespace std;
int main()
{
    string guest, host, pile;
    getline(cin, guest);
    getline(cin, host);
    getline(cin, pile);
    string combined = guest + host;
    unordered_map<char, int> letterCount;
    for (char c : combined)
    {
        letterCount[c]++;
    }
    for (char c : pile)
    {
        letterCount[c]--;
    }
    bool isPossible = true;
    for (const auto &entry : letterCount)
    {
        if (entry.second != 0)
        {
            isPossible = false;
            break;
        }
    }
    cout << (isPossible ? "YES" : "NO") << endl;
    return 0;
}
