#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int left = s[0] - '0';
        int right = s[2] - '0';
        char op = s[1];

        if (op == '<')
        {
            if (left >= right)
            {
                s[0] = right - 1;
                s[1] = '<';
            }
        }
        else if (op == '>')
        {
            if (left <= right)
            {
                s[0] = right + 1;
                s[1] = '>';
            }
        }
        else if (op == '=')
        {
            if (left != right)
            {
                s[1] = '=';
                s[0] = right;
            }
        }
        cout << s << endl;
    }

    return 0;
}
