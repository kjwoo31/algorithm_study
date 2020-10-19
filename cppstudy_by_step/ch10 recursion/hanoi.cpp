#include <iostream>
#include<cmath>
using namespace std;
// https://www.acmicpc.net/problem/11729

void rule(int n, int start, int to, int bypass)
{
    if (n == 1)
        cout << start << ' ' << to << '\n';
    else
    {
        rule(n - 1, start, bypass, to);
        cout << start << ' ' << to << '\n';
        rule(n - 1, bypass, to, start);
    }
}


int hanoi() 
{
    int num;
    cin >> num;
    cout << (int)pow(2, num) - 1 << '\n'; //(1 << num)
    rule(num, 1, 3, 2);
    return 0;
}