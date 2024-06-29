/***************************************
Author: Md Rakibul Hasan
date: 2024-06-29 20:42:38
****************************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n & 1)
    {
        while (n--)
            cout << 1 << ' ';
        cout << endl;
        return;
    }

    cout << "1 3 ";
    n -= 2;
    while (n--)
        cout << 2 << ' ';
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
