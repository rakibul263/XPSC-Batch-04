/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-15 12:01:43
 ******************************/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ara[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
        count ^= ara[i];
    }
    if (n % 2 == 0)
    {
        if (count == 0)
            cout << 0 << endl;
        else
            cout << -1 << endl;
    }
    else
    {
        cout << count << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}