/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-29 19:12:21
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
        string s;
        cin >> n >> s;
        string src = "meow";
        for (int i = 0; i < n; i++)
        {
            if (s[i] <= 90)
                s[i] += 32;
        }
        string ss = "";
        for (int i = 0; i < n; i++)
        {
            if (ss.empty() || ss.back() != s[i])
                ss.push_back(s[i]);
        }
        if (ss == src)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}