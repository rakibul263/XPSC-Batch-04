/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-11 22:10:53
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++)
            cout << 2 << " ";
    }
    else
    {
        int r = n - 3;
        cout << r / 2 + 1 << '\n';
        for (int i = 0; i < r/2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }

    return 0;
}