/***************************************
Author: Md Rakibul Hasan
date: 2024-06-23 20:02:12
****************************************/

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
        ll l, r;
        cin >> l >> r;
        ll cnt(0);
        ll x(1);
        for (ll p = 1; 2 * p <= r; p *= 2, ++cnt)
            ;
        cout << cnt << endl;
    }

    return 0;
}