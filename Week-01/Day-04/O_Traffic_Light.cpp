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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        int x = -1, ans = INT_MIN;
        s = s + s;
        for (int i = s.length(); i >= 0; i--)
        {
            if (s[i] == 'g')
            {
                x = i;
            }
            if (s[i] == c)
            {
                ans = max(ans, x - i);
            }
        }
        cout << ans << endl;
    }

    return 0;
}