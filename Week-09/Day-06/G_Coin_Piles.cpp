/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-24 19:10:40
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n;
    while (cin >> a >> b)
    {
        if (2 * min(a, b) >= max(a, b) && (a + b) % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}