// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int profit[n], weight[n];

    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    int v[n + 1][m + 1];

    for (int i = 0; i < n + 1; i++)
    {
        for (int w = 0; w < m+1; w++)
        {
            if (i == 0 || w == 0)
            {
                v[i][w] = 0;
            }
            else if (w >= weight[i - 1])
            {
                v[i][w] = max(v[i - 1][w], v[i - 1][w - weight[i - 1]] + profit[i - 1]);
            }
            else
            {
                v[i][w] = v[i - 1][w];
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int w = 0; w < m + 1; w++)
        {
            cout << v[i][w] << " ";
        }
        cout << endl;
    }cout<<endl;
    cout<<"Maximum Profit = "<<v[n][m];
}