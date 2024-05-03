/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-01 20:33:54
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    int cost = 2 * x;
    if (cost <= y)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}