// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int coin[n];

    for (int i = 1; i < n; i++)
    {
        cin >> coin[i];
    }
    int coins[n + 1][m + 1];

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if ((i == 0 && j == 0) || j == 0)
            {
                coins[i][j] = 0;
            }
            else if (i == 0)
            {
                coins[i][j] = INT_MAX;
            }
            else if (j >= coin[i])
            {
                coins[i][j] = min(coins[i - 1][j], 1 + coins[i][j - coin[i]]);
            }
            else
            {
                coins[i][j] = coins[i - 1][j];
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (coins[i][j] >= INT_MAX)
            {
                cout << "inf"
                     << " ";
            }
            else
                cout << coins[i][j] << " ";
        }
        cout << endl;
    }
}