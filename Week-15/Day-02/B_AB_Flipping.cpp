/***************************************
Author: Md Rakibul Hasan
date: 2024-07-08 22:17:11
****************************************/

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    char ch[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (ch[i] == 'A' && ch[j] == 'B')
            {
                swap(ch[i], ch[j]);
                if (ch[i] == 'B' && ch[j] == 'A')
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}