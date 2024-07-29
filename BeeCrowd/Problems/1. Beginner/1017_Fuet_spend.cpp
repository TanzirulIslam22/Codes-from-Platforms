#include <bits/stdc++.h>
using namespace std;
int main()
{
    int spend_time, avg_speed;
    float time_needed, distance;
    int milage = 12;
    cin >> spend_time >> avg_speed;
    distance = spend_time * avg_speed;
    time_needed = distance / milage;
    cout << fixed << setprecision(3);
    cout << time_needed;
}