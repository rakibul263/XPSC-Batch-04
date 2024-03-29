/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-29 22:10:41
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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<ll> p(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            p[i] = p[i - 1] + a[i];
        }

        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            ll k;
            cin >> k;
            ll sum = p[n];
            sum -= (p[r] - p[l - 1]);
            sum += ((r - l + 1LL) * k);
            if (sum % 2LL == 1LL)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}