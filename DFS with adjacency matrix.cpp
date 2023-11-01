// 18.10.2023
// This is Arka's code.....

/*
Input
=========================
10 13
1 2
2 3
1 4
4 3
3 10
3 9
2 5
2 7
2 8
5 6
5 7
5 8
7 8

Output
==========================
2 1 4 3 9 10 5 6 7 8

*/

#include <bits/stdc++.h>
using namespace std;
int n, e;
int visited[1001];
int graph[1001][1001];

void dfs(int start)
{
    // visit then print then next node
    visited[start] = 1;
    cout << start << " ";
    for (int j = 1; j <= n; j++)
    {
        if (graph[start][j] != 0 && visited[j] == 0)
        {
            dfs(j);
        }
    }
}

int main()
{

    cin >> n >> e;
    int u, v;
    for (int i = 1; i <= e; i++)
    {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    dfs(2);
}