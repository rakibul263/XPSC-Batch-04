/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-23 17:47:05
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int j = 0; j < x; j++)
            {
                char ch;
                cin >> ch;
                if (ch == 'D')
                {
                    if (v[i] == 9)
                        v[i] = 0;
                    else
                        v[i]++;
                }
                else if (ch == 'U')
                {
                    if (v[i] == 0)
                        v[i] = 9;
                    else
                        v[i]--;
                }
            }
        }
        for (int x : v)
            cout << x << " ";
        cout << '\n';
    }

    return 0;
}