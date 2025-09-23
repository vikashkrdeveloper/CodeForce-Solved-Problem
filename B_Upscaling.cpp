#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int size = 2 * n;

        // Build the grid row by row
        for (int i = 0; i < n; i++)
        { // block row
            string row1 = "", row2 = "";
            for (int j = 0; j < n; j++)
            { // block column
                if ((i + j) % 2 == 0)
                {
                    row1 += "##";
                    row2 += "##";
                }
                else
                {
                    row1 += "..";
                    row2 += "..";
                }
            }
            cout << row1 << "\n"
                 << row2 << "\n";
        }
    }

    return 0;
}
