/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-27 20:23:27
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto ok = [&](ll m)
    {
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total += (m / a[i]);
            if (total >= t)
                return true;
        }
        return false;
    };
    ll l = 1, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << '\n';
    return 0;
}