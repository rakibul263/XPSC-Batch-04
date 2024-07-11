/***************************************
Author: Md Rakibul Hasan
date: 2024-07-11 23:47:18
****************************************/

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
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        ll ans = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            ll temp = n - mp[i];
            ans = min(ans, temp * i);
        }
        cout << ans << endl;
    }
    return 0;
}