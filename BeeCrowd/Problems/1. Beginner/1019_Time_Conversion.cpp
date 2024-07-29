#include <iostream>
using namespace std;
int main()
{
    int total_seconds, seconds, hours, minutes, left_over;
    cin >> total_seconds;
    hours = total_seconds / 3600;
    left_over = total_seconds % 3600;
    minutes = left_over / 60;
    left_over = total_seconds % 60;
    seconds = left_over / 1;

    cout << hours << ":" << minutes << ":" << seconds << endl;
}