// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e; // number of nodes and edges
    cin >> n >> e;

    int u, v;
    vector<int> graph[n + 1];

    for (int i = 1; i <= e; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 1; i < n + 1; i++)
    {
        cout << "Node " << i << "->";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}
