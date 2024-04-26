/******************************
 * author: Md Rakibul Hasan
 * ae: 2024-04-26 20:09:40
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string str;
    ll n, x;
    cin >> n >> x;
    ll a[2000000];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    a[n + 1] = 1e12 + 7;
    for (ll i = 1; i <= n; i++)
    {
        x += a[i];
        if (x / i <= a[i + 1])
        {
            cout << x / i << endl;
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
