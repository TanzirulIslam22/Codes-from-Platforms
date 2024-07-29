#include <bits/stdc++.h>
using namespace std;
int main()
{
    int km;
    float cost, consumption;
    cin >> km >> cost;
    consumption = km / cost;
    cout << fixed << setprecision(3);
    cout << consumption << " km/l" << endl;
}