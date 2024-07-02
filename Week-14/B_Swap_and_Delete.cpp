/***************************************
Author: Md Rakibul Hasan
date: 2024-07-02 08:24:29
****************************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = (int)(s).size();
    vector<int> cnt(2, 0);
    for (int i = 0; i < n; ++i)
        cnt[s[i] - '0']++;
    for (int i = 0; i < n; ++i)
    {
        int x = (s[i] - '0') ^ 1;
        if (cnt[x] == 0)
        {
            cout << n - i << endl;
            return;
        }
        cnt[x]--;
    }
    cout << 0 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int TC = 1;
    cin >> TC;
    while (TC--)
        solve();

    return 0;
}
