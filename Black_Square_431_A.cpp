#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    int total_calories = 0;
    for (char ch : s)
    {
        switch (ch)
        {
        case '1':
            total_calories += a1;
            break;
        case '2':
            total_calories += a2;
            break;
        case '3':
            total_calories += a3;
            break;
        case '4':
            total_calories += a4;
            break;
        }
    }
    cout << total_calories << endl;
    return 0;
}
