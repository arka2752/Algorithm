// This is Arka's code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct rule
{
    int obj;
    double pbw; // profit by weight
};
bool comparepbw(rule r1, rule r2)
{
    if (r1.pbw > r2.pbw)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    double profit[n], weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    rule ara[n];
    for (int i = 0; i < n; i++)
    {
        ara[i].obj = i;
        ara[i].pbw = profit[i] / weight[i];
    }
    sort(ara, ara + n, comparepbw);
    double x[n];
    memset(x, 0, sizeof(x));
    double rw = m;
    for (int i = 0; i < n; i++)
    {
        if (rw >= weight[ara[i].obj])
        {
            rw = rw - weight[ara[i].obj];
            x[ara[i].obj] = 1;
        }
        else
        {
            x[ara[i].obj] = rw / weight[ara[i].obj];
            rw = 0;
        }
    }

    double max_profit = 0;
    for (int i = 0; i < n; i++)
    {
        max_profit += (x[i] * profit[i]);
    }
    cout << max_profit << endl;
}