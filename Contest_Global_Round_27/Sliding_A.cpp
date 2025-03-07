#include <iostream>
using namespace std;

long long calculate_distance(int n, int m, int r, int c) {
    long long total_distance = 0;

    // Persons to the right in the same row
    total_distance += (m - c); // Persons in row r moving left

    // Persons below in the rows (r + 1 to n)
    total_distance += (n - r) * (m + 1);

    // Persons above in the rows (1 to r - 1)
    total_distance += (r - 1) * (m + 1);

    return total_distance;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        cout << calculate_distance(n, m, r, c) << endl;
    }
    return 0;
}
