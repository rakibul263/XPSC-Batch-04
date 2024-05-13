/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-13 19:41:42
 ******************************/

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
bool prime(int n)
{
    int x = sqrt(n);
    return is_prime(x) && x * x == n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
        if (prime(a[i]))
            cout << "YES\n";
        else
            cout << "NO\n";

    return 0;
}