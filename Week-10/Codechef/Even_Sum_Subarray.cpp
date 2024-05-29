/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-29 20:50:55
 ******************************/

#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &a)
{
    int sum = 0;
    for (int val : a)
        sum += val;
    if (sum % 2 == 0)
        return a.size();
    else
    {
        int maximum_length = 0;
        int N = a.size();
        for (int i = 0; i < N; i++)
        {
            if (a[i] % 2 != 0)
            {
                maximum_length = max(maximum_length, N - (i + 1));
                break;
            }
        }
        for (int i = N - 1; i >= 0; i--)
        {
            if (a[i] % 2 != 0)
            {
                maximum_length = max(maximum_length, i);
                break;
            }
        }
        return maximum_length;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> a(x);
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        int ans = solve(a);
        cout << ans << endl;
    }

    return 0;
}