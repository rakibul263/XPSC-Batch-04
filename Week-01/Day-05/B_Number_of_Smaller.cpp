#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll l = 0, r = 0, ans = 0;
    while (r < m)
    {
        while (b[r] > a[l])
        {
            ans++;
            l++;
        }
        r++;
        cout << ans << " ";
    }
    return 0;
}