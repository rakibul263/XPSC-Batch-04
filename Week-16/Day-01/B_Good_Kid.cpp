/***************************************
Author: Md Rakibul Hasan
date: 2024-07-14 20:11:53
****************************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    v[0]++;
    int pro = 1;
    for (int i = 0; i < n; i++)
    {
        pro = pro * v[i];
    }
    cout << pro << endl;
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
