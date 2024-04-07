/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-07 17:13:16
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
        int n;
        cin >> n;
        while (n)
            cout << n-- << " ";
        cout << '\n';
    }

    return 0;
}