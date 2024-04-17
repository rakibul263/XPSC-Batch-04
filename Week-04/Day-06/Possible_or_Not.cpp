/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-17 19:02:30
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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int an = -1;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] & k) == k)
            {
                an &= a[i];
            }
        }
        if (an == k)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}