/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-25 19:32:50
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    ll count = 0;
    while (true)
    {
        if ((b % k == 0) && (b / a >= k))
        {
            count++;
            b /= k;
        }
        else if (b % k == 0)
        {
            count += (b - a);
            break;
        }
        else
        {
            ll temp = b % k;
            count += temp;
            b -= (temp);
        }
    }
    cout << count << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}