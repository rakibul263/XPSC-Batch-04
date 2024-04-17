/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-17 18:37:48
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = -1; ++i < n;)
        cin >> v[i];

    ll x = v[0];
    for (int i = -1; ++i < n;)
        x &= v[i];

    cout << x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        Solve();
        cout << '\n';
    }
}
