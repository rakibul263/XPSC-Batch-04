/******************************
* author: Md Rakibul Hasan
* date: 2024-03-25 22:30:46
******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        int ans = mp.size();
        if ((n - ans) % 2)
            ans--;
        cout << ans << endl;
    }

    return 0;
}