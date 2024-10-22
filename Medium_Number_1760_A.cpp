#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int nums[3] = {a, b, c};
        sort(nums, nums + 3);
        cout << nums[1] << endl;
    }

    return 0;
}
