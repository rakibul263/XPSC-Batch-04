/***************************************
Author: Md Rakibul Hasan
date: 2024-07-06 21:31:57
****************************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int i = 0, j = (int)(s).size() - 1;
    while (s[i] == 'W')
        i++;
    while (s[j] == 'W')
        j--;
    cout << j - i + 1 << endl;
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