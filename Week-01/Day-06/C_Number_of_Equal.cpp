#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll l = 0, r = 0, ans = 0;
    while (l < n && r < m)
    {
        int count_1 = 0, count_2 = 0, current = a[l];
        while (a[l] == current && l < n)
        {
            count_1++;
            l++;
        }

        while (current > b[r] && r < m)
        {
            r++;
        }
        while (b[r] == current && r < m)
        {
            count_2++;
            r++;
        }
        ans += (1LL * count_1 * count_2);
    }
    cout << ans << endl;

    return 0;
}