/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-29 18:05:10
 ******************************/

#include <bits/stdc++.h>
using namespace std;
const int maximum_number = 1e4;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> pw;
    for (int i = 1; i <= maximum_number; i++)
    {
        pw.push_back(pow(i, 3));
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        bool found = false;

        for (int i = 0; i < maximum_number; i++)
        {
            if (pw[i] >= x)
            {
                break;
            }
            int l = 0, r = maximum_number - 1, mid;
            ll need = x - pw[i];
            bool ok = false;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            if (ok)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}