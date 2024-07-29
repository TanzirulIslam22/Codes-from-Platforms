#include <bits/stdc++.h>
using namespace std;

int main()
{
    double r, volume, pi = 3.14159;
    cin >> r;
    volume = (4 / 3.0) * pi * r * r * r;
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;
}