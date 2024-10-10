#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> heights[i];
    }

    int maxHeight = *max_element(heights.begin(), heights.end());
    int minHeight = *min_element(heights.begin(), heights.end());
    int maxIndex = -1;
    int minIndex = -1;
    for (int i = 0; i < n; ++i)
    {
        if (heights[i] == maxHeight)
        {
            maxIndex = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (heights[i] == minHeight)
        {
            minIndex = i;
            break;
        }
    }
    int swaps = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex)
    {
        swaps--;
    }

    cout << swaps << endl;

    return 0;
}
