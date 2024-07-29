#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z, greatest;
    cin >> x >> y >> z;
    greatest = (x + y + abs(x - y)) / 2;
    greatest = (greatest + z + abs(greatest - z)) / 2;
    cout << greatest << " eh o maior" << endl;
}