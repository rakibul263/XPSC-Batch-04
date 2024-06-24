/***************************************
Author: Md Rakibul Hasan
date: 2024-06-24 20:22:37
****************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll sq = sqrt(n);
    ll div = n / sq;
    ll ans = sq - 1;
    ans += div - 1;
    if (n % sq)
        ans++;
    cout << ans << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    for (int cn = 1; cn <= t; cn++)
    {
        solve();
    }
    return 0;
}