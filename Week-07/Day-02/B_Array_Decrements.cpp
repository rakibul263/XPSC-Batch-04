/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-05 16:46:39
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
        int n;
        int o = 0;
        bool p = 1;
        cin >> n;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            o = max(o, a[i] - b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] - o < b[i] && b[i] != 0)
                p = 0;
        }
        if (p)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}