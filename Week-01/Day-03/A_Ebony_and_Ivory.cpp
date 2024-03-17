#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c;
    cin >> a >> b >> c;
    for (ll i = 0; i <= c; i++)
    {

        for (ll j = 0; j <= c; j++)
        {
            if ((i * a + j * b) == c)
            {
                cout << "Yes" << '\n';
                return 0;
            }
        }
    }
    cout << "No" << '\n';

    return 0;
}