/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-15 17:51:24
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
        vector<ll> v(100, 0);
        ll n, result;
        cin >> n;
        result = 0;
        for (ll p = 0; p < n; p++)
        {
             ll x, count = 0;
            ;
            cin >> x;
            while (x > 1)
            {
                x /= 2;
                count++;
            }
            result += v[count]++;
        }

        cout << result << endl;
    }

    return 0;
}