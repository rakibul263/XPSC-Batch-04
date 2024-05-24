/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-22 20:31:40
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int ans = a - b;
    if (ans >= 18)
        cout << "RCB" << '\n';
    else
        cout << "CSK" << '\n';

    return 0;
}