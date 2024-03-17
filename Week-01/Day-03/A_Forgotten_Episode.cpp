#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    
    sort(a, a + n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != i + 1)
        {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    cout << n << '\n';

    return 0;
}