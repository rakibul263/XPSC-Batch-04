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
        string s;
        cin >> s;
        int l = 0, r = 0;
        for (int i = 0; i < 3; i++)
        {
            l += s[i] - '0';
            r += s[5 - i] - '0';
        }
        if (l != r)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}