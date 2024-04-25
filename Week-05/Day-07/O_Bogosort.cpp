/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-25 21:02:31
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[105];
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << '\n';
    }

    return 0;
}