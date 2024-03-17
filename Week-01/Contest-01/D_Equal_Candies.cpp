#include <bits/stdc++.h>
#define ll long long int
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
        cin >> n;
        vector<ll> a(n);
        ll minimum = INT_MAX, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            minimum = min(minimum, a[i]);
        }
        for (int i = 0; i < n; i++)
            sum += a[i] - minimum;
        cout << sum << "\n";
    }

    return 0;
}