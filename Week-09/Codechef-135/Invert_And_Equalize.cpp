#include <iostream>
#include <string>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll count = 0;

        for (ll i = 1; i < n; ++i)
        {
            if (s[i] != s[i - 1])
                count++;
        }
        ll ans = (count + 1) / 2;
        cout << ans << endl;
    }

    return 0;
}
