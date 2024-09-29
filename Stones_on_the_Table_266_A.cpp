#include <bits/stdc++.h>
using namespace std;

int main()
{
    // step 1: input the number of stones and the stones
    int n;
    cin >> n;
    string stones;
    cin >> stones;
    // step 2: count the number of adjacent stones with the same color
    int count = 0;
    // step 3: iterate through the stones and compare adjacent stones
    for (int i = 0; i < n - 1; i++)
    {

        if (stones[i] == stones[i + 1])
        {
            count++;
        }
    }
    // step 4: output the number of stones to be removed
    cout << count << endl;
    return 0;
}
