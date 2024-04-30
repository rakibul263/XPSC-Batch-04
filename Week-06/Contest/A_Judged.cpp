/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-29 22:45:03
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int j[5];
        int l = 0;

        for (int i = 0; i < 5; i++)
        {
            cin >> j[i];
            l += j[i];
        }

        if (l >= 4)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}