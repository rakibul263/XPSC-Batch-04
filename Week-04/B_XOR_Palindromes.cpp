/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-15 10:59:43
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        string ans = "";

        int gp = 0;
        int b = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                gp += 2;
            }
            else
            {
                b++;
            }
            l++, r--;
        }

        for (int i = 0; i <= n; i++)
        {
            int total = i;
            total -= b;

            if (total < 0)
            {
                ans.push_back('0');
                continue;
            }

            total = max((total % 2), total - gp);
            total = max(0, total - (n % 2));

            if (total == 0)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }

        cout << ans << endl;
    }
    return 0;
}