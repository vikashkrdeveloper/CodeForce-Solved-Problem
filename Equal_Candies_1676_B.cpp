#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> candies(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> candies[i];
        }
        int minCandies = *min_element(candies.begin(), candies.end());
        int totalCandiesToEat = 0;
        for (int i = 0; i < n; ++i)
        {
            totalCandiesToEat += candies[i] - minCandies;
        }
        cout << totalCandiesToEat << endl;
    }

    return 0;
}
