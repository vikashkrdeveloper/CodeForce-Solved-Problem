#include <bits/stdc++.h>
using namespace std;

int main()
{
    string expression;
    cin >> expression;
    int length = expression.length();
    vector<int> numbers;
    for (int i = 0; i < length; i++)
    {
        if (expression[i] != '+')
        {
            numbers.push_back(expression[i] - '0');
        }
    }
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i];
        if (i != numbers.size() - 1)
        {
            cout << "+";
        }
    }
    cout << endl;
    return 0;
}
