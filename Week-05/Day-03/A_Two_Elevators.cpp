/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-21 19:51:52
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
        int a, b, c;
        cin >> a >> b >> c;

        int ans1 = abs(a - 1);
        int ans2 = abs(b - c) + (c - 1);

        if (ans1 == ans2)
        {
            cout << 3 << endl;
        }
        else if (ans1 < ans2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;

    return 0;
}