/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-21 23:23:49
 ******************************/

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, x, k;
    cin >> n >> m;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> k;
        auto it = s.upper_bound(k);
        if (it == s.begin())
            cout << -1;
        else
        {
            --it;
            cout << *it;
            s.erase(it);
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}