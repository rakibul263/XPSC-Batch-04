/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-30 21:04:00
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        string a, b;
        ll flag = 0;
        cin >> a >> b;
        for (ll i = 0; i < (ll)a.size(); i++)
        {
            if ((a[i] == '0' and b[i] == '0') and (a[i + 1] == '1' and b[i + 1] == '1'))
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}