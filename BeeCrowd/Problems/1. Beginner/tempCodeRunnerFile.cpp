#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x > y)
    {
        if (x > z)
        {
            cout << x << " eh o maior" << endl;
        }
        else
        {
            cout << z << " eh o maior" << endl;
        }
    }
    else if (y > x)
    {
        if (y > z)
        {
            cout << y << " eh o maior" << endl;
        }
        else
        {
            cout << z << " eh o maior" << endl;
        }
    }
    else
    {
        cout << z << " eh o maior" << endl;
    }
}