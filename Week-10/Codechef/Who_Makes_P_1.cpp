/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-29 20:44:32
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, d;
    cin >> t >> d;
    if (t <= d)
        cout << "Tyro" << '\n';
    else
        cout << "Dom" << '\n';

    return 0;
}