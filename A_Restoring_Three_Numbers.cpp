#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[4];
    // Read the four numbers
    for (int i = 0; i < 4; ++i)
    {
        cin >> nums[i];
    }
    // Sort the numbers to easily identify the largest one
    sort(nums, nums + 4);
    int a = nums[3] - nums[2]; // It's should be nums[3] - nums[2] that gives the correct result
    int b = nums[3] - nums[1]; // It's should be nums[3] - nums[1] that gives the correct result
    int c = nums[3] - nums[0]; // It's should be nums[3] - nums[0] that gives the correct result

    cout << a << " " << b << " " << c << endl;
    return 0;
}
