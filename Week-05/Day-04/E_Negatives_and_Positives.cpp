/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-22 16:02:02
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

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
        vector<int> a(n);
        ll sum = 0;
        int neg = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                neg++;
                a[i] = -a[i];
            }
            sum += a[i];
        }
        sort(a.begin(), a.end());
        if (neg & 1)
            sum -= 2 * a[0];
        cout << sum << "\n";
    }

    return 0;
}