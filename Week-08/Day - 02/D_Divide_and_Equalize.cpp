/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-13 23:07:47
 ******************************/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v(1000001);
int p[1000001];
void Solve()
{
    int n, x;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        int y = x;
        for (int j = 0; j < v[y].size(); j++)
            while (x % v[y][j] == 0)
            {
                mp[v[y][j]]++;
                x /= v[y][j];
            }
    }
    for (auto &p : mp)
        if (p.second % n != 0)
        {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 2; i <= 1000000; i++)
        if (p[i] == 0)
            for (int j = i; j <= 1000000; j += i)
            {
                v[j].push_back(i);
                p[j] = 1;
            }
    int t;
    cin >> t;
    while (t--)
        Solve();

    return 0;
}