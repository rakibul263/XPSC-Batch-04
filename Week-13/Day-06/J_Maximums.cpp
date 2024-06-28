/***************************************
Author: Md Rakibul Hasan
date: 2024-06-28 19:18:35
****************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m = 0, a;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        if (i == 0)
        {
            cout << a << " ";
            m = a;
        }
        else
        {
            cout << a + m << " ";
            m = max(m, (a + m));
        }
    }
    cout << endl;

    return 0;
}