/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-18 12:26:20
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int cnt;
        int a[m];
        for (int i = 0; i < m; i++)
            cin >> a[i];
        int x;
        cin >> x;
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            cnt = 0;
            for (int j = 0; j <= n; j++)
            {
                if (((1 << j) & a[i]) != ((1 << j) & x))
                    cnt++;
            }
            if (cnt <= k)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}