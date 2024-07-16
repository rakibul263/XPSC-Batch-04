/***************************************
Author: Md Rakibul Hasan
date: 2024-07-16 21:07:05
****************************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int zero = 0, one = 0;
    for (auto i : s)
    {
        if (i == '0')
            zero++;
        else
            one++;
    }
    int ans = min(zero, one);
    if (ans % 2)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
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