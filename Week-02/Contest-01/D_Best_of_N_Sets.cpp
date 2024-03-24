/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-24 23:01:37
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
        int a, b, sum = 0;
        cin >> a >> b;
        sum = a + b;
        int max_value = max(a, b);
        int min_value = min(a, b);
        sum += (max_value - min_value);
        cout << sum - 1 << '\n';
    }

    return 0;
}