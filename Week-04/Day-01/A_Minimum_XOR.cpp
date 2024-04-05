/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-05 20:49:25
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x ^= a[i];
        }
        int ans = x;
        for (int i = 0; i < n; i++)
            ans = min(ans, x ^ a[i]);
        cout << ans << '\n';
    }

    return 0;
}