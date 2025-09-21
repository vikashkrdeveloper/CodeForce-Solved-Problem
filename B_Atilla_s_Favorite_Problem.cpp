#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char max_char = *max_element(s.begin(), s.end());
        int min_alphabet_size = max_char - 'a' + 1;

        cout << min_alphabet_size << "\n";
    }
    return 0;
}
