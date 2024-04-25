/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-25 16:46:05
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
        ll a, b, n, s, sum;
        sum = 0;
        cin >> a >> b >> n >> s;

        ll d = s / n;
        d = min(d, a);

        if (s - n * d <= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}