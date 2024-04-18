/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-18 15:11:47
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    vector<int> bits(64, 0);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 64; j++)
        {
            if ((v[i] >> j) & 1)
            {
                bits[j]++;
            }
        }
    }
    ll count = 0;
    for (int i = 63; i >= 0; i--)
    {
        if (bits[i])
        {
            count = bits[i];
            break;
        }
    }
    int ans = ceil(count * 1.0 / 2);
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}