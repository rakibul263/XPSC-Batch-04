/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-03 18:29:35
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
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                count++;
        }
        if (min(count, n - count) % 2)
            cout << "Zlatan" << endl;
        else
            cout << "Ramos" << endl;
    }

    return 0;
}