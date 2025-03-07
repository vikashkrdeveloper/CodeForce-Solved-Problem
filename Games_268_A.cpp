#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> uniforms(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> uniforms[i].first >> uniforms[i].second;
    }
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        int home_color = uniforms[i].first;
        for (int j = 0; j < n; ++j)
        {
            if (i != j)
            {
                int guest_color = uniforms[j].second;
                if (home_color == guest_color)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
