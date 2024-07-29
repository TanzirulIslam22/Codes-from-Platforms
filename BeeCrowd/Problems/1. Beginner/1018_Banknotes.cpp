#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total_amount;
    int N100, N50, N20, N10, N5, N2, N1, left_over;
    cin >> total_amount;

    N100 = total_amount / 100;
    left_over = total_amount % 100;
    cout << N100 << " nota(s) de R$ 100,00" << endl;

    N50 = left_over / 50;
    left_over = left_over % 50;
    cout << N50 << " nota(s) de R$ 50,00" << endl;

    N20 = left_over / 20;
    left_over = left_over % 20;
    cout << N20 << " nota(s) de R$ 20,00" << endl;

    N10 = left_over / 10;
    left_over = left_over % 10;
    cout << N10 << " nota(s) de R$ 10,00" << endl;

    N5 = left_over / 5;
    left_over = left_over % 5;
    cout << N5 << " nota(s) de R$ 5,00" << endl;

    N2 = left_over / 2;
    left_over = left_over % 2;
    cout << N2 << " nota(s) de R$ 2,00" << endl;

    N1 = left_over / 1;
    cout << N1 << " nota(s) de R$ 1,00" << endl;
}