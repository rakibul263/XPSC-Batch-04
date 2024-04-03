/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-03 21:11:08
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
        cin >> n;
        int matrix[n + 5][n];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
        map<int, int> mp,mp2;
        for (int i = 1; i <= n; i++)
        {
            mp[matrix[i][n - 1]] = i;
            mp2[matrix[i][n - 1]]++;
        }
        int idx = 0, val;
        for (auto u : mp2)
        {
            if (u.second == 1)
                idx = u.first;
            else
                val = u.first;
        }
        for (int i = 1; i < n; i++)
        {
            cout << matrix[mp[idx]][i] << " ";
        }
        cout << val << endl;
    }
    return 0;
}