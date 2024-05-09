/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-09 21:10:41
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
        string s;
        cin >> s;
        ll z(0), a(0);
        for (ll p = 0; p < s.size(); p++)
        {
            z += (s[p] == '0');
            a += (s[p] == '1');
        }

        ll ans(0);
        for (ll p = 0; !ans && p < s.size(); p++)
        {
            if (s[p] == '1')
            {
                if (z > 0)
                    --z;
                else
                {
                    ans = s.size() - p;
                    break;
                }
            }
            else if (s[p] == '0')
            {
                if (a > 0)
                {
                    --a;
                }
                else
                {
                    ans = s.size() - p;
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}