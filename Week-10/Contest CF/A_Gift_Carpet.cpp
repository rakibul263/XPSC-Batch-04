/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-28 17:30:06
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        char s[n][m];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> s[i][j];
        string name = "vika";
        ll ind = 0, count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char curr = s[j][i];
                if (curr == name[ind])
                {
                    ind++;
                    count++;
                    break;
                }
            }

            if (count == 4)
                break;
        }
        if (count == 4)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}