#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            grid[i] = string(m, '#');
        }
        else
        {
            if ((i - 1) % 4 == 0)
            {
                grid[i] = string(m - 1, '.') + '#';
            }
            else
            {
                grid[i] = '#' + string(m - 1, '.');
            }
        }
    }
    for (const auto &row : grid)
    {
        cout << row << endl;
    }
    return 0;
}
