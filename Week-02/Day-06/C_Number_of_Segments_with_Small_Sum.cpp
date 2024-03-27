/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-27 20:25:17
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 0, ans = 0, sum = 0;

    while (r < n)
    {
        sum += a[r];
        if (sum <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > s && l < r)
            {
                sum -= a[l];
                l++;
            }
            if (sum <= s)
                ans += (r - l + 1);
        }
        r++;
    }

    cout << ans << '\n';

    return 0;
}