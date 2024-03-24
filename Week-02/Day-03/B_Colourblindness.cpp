/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-24 21:37:00
 ******************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if (((s1[i] == 'B' || s1[i] == 'G' && s1[i] != 'R') && s2[i] == 'R') || ((s2[i] == 'B' || s2[i] == 'G' && s2[i] != 'R') && s1[i] == 'R'))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
    return 0;
}