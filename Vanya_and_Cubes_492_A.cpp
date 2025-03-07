#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int height = 0;
    int cubes_used = 0;
    while (true)
    {
        height++;
        cubes_used += height * (height + 1) / 2;
        if (cubes_used > n)
        {
            height--;
            break;
        }
    }
    cout << height << endl;
    return 0;
}
