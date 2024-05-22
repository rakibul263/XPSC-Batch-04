/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-22 14:47:54
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ull n;
    cin >> n;
    int arra[n];
    for (ull i = 0; i < n; i++)
        cin >> arra[i];
    ull count = 0;
    for (ull i = 1; i < n; i++)
    {
        if (arra[i - 1] <= arra[i])
        {
            continue;
        }
        count += abs(arra[i] - arra[i - 1]);
        arra[i] = arra[i - 1];
    }
    cout << count << endl;

    return 0;
}