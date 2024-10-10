#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};
    int totalFaces = 0;
    for (int i = 0; i < n; ++i)
    {
        string polyhedron;
        cin >> polyhedron; 
        totalFaces += faces[polyhedron];
    }
    cout << totalFaces << endl;
    return 0;
}
