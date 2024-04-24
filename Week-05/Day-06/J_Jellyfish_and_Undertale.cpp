/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-24 17:02:05
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        ll sum = b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += min(x, a - 1);
        }
        cout << sum << endl;
    }
    return 0;
}