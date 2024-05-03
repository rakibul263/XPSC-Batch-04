/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-03 21:00:51
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, ans = INT_MAX;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ans = min(ans, abs(a[0] - a[1]));
    ans = min(ans, abs(a[n - 2] - a[n - 1]));

    for (int i = 1; i < n - 1; i++)
    {
        ans = min(ans, max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])));
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}