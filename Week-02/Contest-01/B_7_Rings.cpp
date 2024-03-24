/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-24 22:38:38
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
        int a, b, multiple = 1;
        cin >> a >> b;
        multiple = a * b;
        if (multiple < 10000 || multiple > 99999)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}