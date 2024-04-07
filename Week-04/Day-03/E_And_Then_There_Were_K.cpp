/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-07 20:17:26
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
        int count = 0;
        while (n > 1)
        {
            n >>= 1;
            count++;
        }
        int p = 1 << count;
        int ans = p - 1;

        cout << ans << '\n';
    }

    return 0;
}