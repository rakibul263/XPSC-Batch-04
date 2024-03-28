/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-28 16:22:48
 ******************************/

#include <bits/stdc++.h>
using namespace std;

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[a[i]]++;
        int maxFrequency = 0;
        for (auto val : mp)
            maxFrequency = max(maxFrequency, val.second);
        int ans = 0;
        while (maxFrequency < n)
        {
            int r = n - maxFrequency;
            int add = maxFrequency;
            ans++;
            ans += min(add, r);
            maxFrequency += min(add, r);
        }
        cout << ans << '\n';
    }
    return 0;
}