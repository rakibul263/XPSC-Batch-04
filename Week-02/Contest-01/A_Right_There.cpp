/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-24 22:34:24
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
        int a, b;
        cin >> a >> b;
        if (a > b)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}