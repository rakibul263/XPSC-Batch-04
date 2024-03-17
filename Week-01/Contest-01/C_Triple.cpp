#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> v;
        ll n, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int maximum = v[0];
        for (int i = 0; i < n; i++)
        {
            if (maximum == v[i])
            {
                count++;
                if (count == 3)
                {
                    cout << v[i] << '\n';
                    break;
                }
            }
            else
            {
                count = 1;
                maximum = v[i];
            }
        }
        if (count < 3)
            cout << "-1" << '\n';
    }
    return 0;
}