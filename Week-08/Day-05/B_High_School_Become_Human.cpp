/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-16 18:56:00
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    double a = m * log(n);
    double b = n * log(m);

    if (a > b)
        cout << ">";
    else if (b > a)
        cout << "<";
    else
        cout << "=";
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}