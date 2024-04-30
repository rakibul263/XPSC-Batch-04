/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-29 22:53:22
 ******************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int mn= INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x / k > 0)
        {
            int w = x - (x / k) * k;
            mn= min(mn, w);
        }
    }
    if (mn==INT_MAX)
    {
        cout << -1 << '\n';
        return;
    }
    cout <<mn<< '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}