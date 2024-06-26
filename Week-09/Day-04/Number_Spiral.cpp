/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-22 18:32:49
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll ans;
        if (y > x)
        {
            if (y % 2 == 0)
                ans = (y - 1) * (y - 1) + 1 + (x - 1);
            else
                ans = y * y - (x - 1);
        }
        else
        {
            if (x % 2 == 1)
                ans = (x - 1) * (x - 1) + 1 + (y - 1);
            else
                ans = x * x - (y - 1);
        }
        cout << ans << '\n';
    }

    return 0;
}