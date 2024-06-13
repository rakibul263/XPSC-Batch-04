/******************************
 * author: Md Rakibul Hasan
 * date: 2024-06-13 19:28:06
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
        ll n, k, x;
        cin >> n >> k >> x;
        if (n < k || x < k - 1)
            cout << -1 << endl;
        else
        {
            ll a = k - 1;
            ll ans = (a * (a + 1)) / 2;
            ll bk = n - k;
            if (x != k)
                ans += bk * x;
            else
                ans += bk * (k - 1);
            cout << ans << endl;
        }
    }
    return 0;
}