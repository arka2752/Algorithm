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
2 1 4 3 10 9 5 6 7 8

*/
#include <bits/stdc++.h>
using namespace std;
int n, e;
int visited[1001];
vector<int> graph[1001];
vector<int> ans;
void dfs(int start)
{
    visited[start] = 1;
    cout << start << " ";
    for (int j = 0; j < graph[start].size(); j++)
    {
        int node = graph[start][j];
        if (visited[node] == 0)
        {
            dfs(node);
        }
    }
    ans.push_back(start);
}
void topological_sort()
{
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i);
        }
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{

    cin >> n >> e;
    int u, v;
    for (int i = 1; i <= e; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
    }
    topological_sort();
}