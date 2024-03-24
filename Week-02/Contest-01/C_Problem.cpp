/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-24 22:52:18
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
        int a, b, ans = 0;
        cin >> a >> b;
        if ((a + b) % 2 == 0)
        {
            if (abs(a - b) % 2 == 0)
                cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }

    return 0;
}