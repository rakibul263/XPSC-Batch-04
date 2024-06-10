#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int magic[m + 1];
    for (int i = 1; i <= m; ++i)
        cin >> magic[i];
    vector<bool> visited(n + 1, false);
    vector<int> result;

    for (int i = 1; i <= m; ++i)
    {
        int x = magic[i];
        if (!visited[x])
        {
            visited[x] = true;
            result.push_back(x);
        }
    }
    for (int i = 0; i < (int)result.size(); ++i)
        cout << result[i] << " \n"[i == (int)result.size() - 1];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
