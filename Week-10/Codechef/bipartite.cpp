/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-29 17:55:50
 ******************************/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> col;
bool bipartite;

void color(int u, int current)
{
    if (col[u] != -1 and col[u] != current)
    {
        bipartite = false;
        return;
    }
    col[u] = current;
    if (vis[u])
        return;
    vis[u] = true;
    for(auto i : adj[u])
    {
        color(i, current xor 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int vertex, edges;
    cin >> vertex >> edges;
    adj = vector<vector<int>>(vertex);
    vis = vector<bool>(vertex, false);
    col = vector<int>(vertex, -1);
    bipartite = true;
    // input edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < vertex; i++)
    {
        if (!vis[i])
        {
            color(i, 0);
        }
    }
    if (bipartite)
        cout << "Graph is Bipartite" << endl;
    else
        cout << "Graph is not Bipartite" << endl;
    return 0;
}