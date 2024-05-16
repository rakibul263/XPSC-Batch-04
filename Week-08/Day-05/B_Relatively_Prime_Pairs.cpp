/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-16 21:50:45
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t = 1;
    while (t--)
    {
        ll m, n;
        cin >> m >> n;
        cout << "YES" << endl;
        for (; m < n; m += 2)
        {
            cout << m << " " << m + 1 << endl;
        }
    }
    return 0;
}