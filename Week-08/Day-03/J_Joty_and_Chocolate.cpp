/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-14 21:42:49
 ******************************/

#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int lcm()
{
    return ((a / __gcd(a, b)) * b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int p, q, s = 0, ans = 0;
    cin >> n >> a >> b >> p >> q;

    ans += ((n / a) * p);
    ans += ((n / b) * q);
    int Lcm = lcm();

    s = n / Lcm;
    ans -= (s * (p + q));
    ans += (s * max(p, q));

    cout << ans << '\n';

    return 0;
}