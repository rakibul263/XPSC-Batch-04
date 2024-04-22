/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-22 17:30:30
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;

    ll n = s.size();

    for (int i = 0; i < (n / 2) - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}