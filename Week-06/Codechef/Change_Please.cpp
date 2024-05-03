/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-01 20:42:39
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int result = 100 - x;
        int q = result / 10;
        int div = result % 10;
        int final_result = div - div;
        int a = q * 10 + final_result;
        cout << a << endl;
    }

    return 0;
}