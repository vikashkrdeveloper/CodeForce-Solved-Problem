#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> square(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> square[i];
        }

        // Find the row with 
        for (int i = 0; i < 3; i++)
        {
            int pos = square[i].find('?');
            if (pos != string::npos)
            {
                // Collect the two known chars
                set<char> letters = {'A', 'B', 'C'};
                letters.erase(square[i][(pos + 1) % 3]);
                letters.erase(square[i][(pos + 2) % 3]);
                cout << *letters.begin() << "\n";
                break;
            }
        }
    }
    return 0;
}
