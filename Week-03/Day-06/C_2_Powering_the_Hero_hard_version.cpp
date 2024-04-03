/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-03 21:02:04
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
        {
            int n;
            cin >> n;
            vector<ll> a(n);
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }

            ll ans = 0;
            priority_queue<ll> pq;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 0)
                {
                    if (pq.empty())
                        continue;
                    ans += pq.top();
                    pq.pop();
                }
                else
                {
                    pq.push(a[i]);
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}