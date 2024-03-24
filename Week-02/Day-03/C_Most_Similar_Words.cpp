/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-24 17:29:54
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int diff(string x, string y)
{
    int result = 0;
    int n = x.size();
    for (int i = 0; i < n; i++)
    {
        result += abs(x[i] - y[i]);
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = min(ans, diff(s[i], s[j]));
            }
        }
        cout << ans << endl;
    }

    return 0;
}