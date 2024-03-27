/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-27 20:00:47
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
        int n, m;
        string s;
        cin >> n >> m >> s;
        int c[26] = {0};
        for (int i = 0; i < n; i++)
        {
            int x = s[i] - 'a';
            c[x]++;
        }
        ll ct = -1;
        for (int i = 0; i < 26; i++)
        {
            if (c[i] % 2 == 1)
                ct++;
        }
        if (ct <= m)
            cout << "YES" << '\n';
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}