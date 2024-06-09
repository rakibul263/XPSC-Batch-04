/******************************
 * author: Md Rakibul Hasan
 * date: 2024-06-09 22:03:12
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
        ll n;
        cin >> n;

        vector<pair<ll, ll>> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first >> arr[i].second;
        }

        bool flag = true;

        for (int i = 1; i < n; i++)
        {
            if (arr[i].first >= arr[0].first and arr[i].second >= arr[0].second)
            {
                flag = false;
            }
        }

        if (!flag)
        {
            cout << -1 << endl;
        }
        else
            cout << arr[0].first << endl;
    }

    return 0;
}