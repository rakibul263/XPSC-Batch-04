/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-16 14:07:52
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
        int n, i = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = a[0] | a[1];
        for (int i = 1; i < n; i++)
        {
            sum = sum | a[i];
        }
        cout << sum << endl;
    }

    return 0;
}