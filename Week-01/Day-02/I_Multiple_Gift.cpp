#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;
    int count = 0;
    // for (ll i = a; i <= b; i *= 2)
    // {
    //     count++;
    // }
    ll i = a;
    while (i <= b)
    {
        count++;
        i *= 2;
    }
    cout << count << endl;

    return 0;
}