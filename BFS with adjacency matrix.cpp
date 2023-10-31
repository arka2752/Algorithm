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
2 1 3 5 7 8 4 9 10 6

*/

#include <bits/stdc++.h>
using namespace std;
int n, e;
int visit[1001];
int graph[1001][1001];
void bfs(int start)
{
    // mandatory 3 step
    // visit
    // Add on answer
    // push on queue

    visit[start] = 1;
    cout << start << " ";
    queue<int> Q;
    Q.push(start);

    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();
        for (int j = 1; j <= n; j++)
        {
            if (graph[x][j] != 0 && visit[j] == 0)
            {
                visit[j] = 1;
                cout << j << " ";
                Q.push(j);
            }
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
    bfs(2);
}