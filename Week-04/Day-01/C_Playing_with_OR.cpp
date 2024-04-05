/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-05 20:49:54
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n], c = 0, x;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i <= n - m; i++)
            for (int j = 0; j < m; j++)
                if (a[i + j] % 2)
                {
                    c++;
                    break;
                }
        cout << c << '\n';
    }

    return 0;
}