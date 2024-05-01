/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-01 18:10:47
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
        int n, k;
        cin >> n >> k;

        // lamda aproch
        auto ok = [&](ll mid)
        {
            return mid - (mid / n) >= k;
        };

        // binary search part
        ll l = 1, r = 1e10, mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
                ans = mid, r = mid - 1;
            else
                l = mid + 1;
        }
        cout << ans << '\n';
    }
}