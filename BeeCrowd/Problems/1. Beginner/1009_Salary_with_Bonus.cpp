#include <bits/stdc++.h>
using namespace std;
int main()
{
    char name[10];
    double salary, sells, totalsalary;
    cin >> name;
    cin >> salary;
    cin >> sells;
    totalsalary = salary + (sells * 15 / 100);
    cout<<fixed<<setprecision(2);
    cout <<"TOTAL = R$ "<<totalsalary<<endl;
}