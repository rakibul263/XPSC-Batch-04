#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0, i = 1;
        while (i <= n)
        {
            int x;
            cin >> x;
            ans = max(ans, x - i);
            i++;
        }
        cout << ans << '\n';
    }
    return 0;
}