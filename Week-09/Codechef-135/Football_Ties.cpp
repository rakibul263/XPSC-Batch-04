/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-22 20:38:22
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
        int a, b;
        cin >> a >> b;

        int minimum_draw = -1;

        for (int i = 0; i <= 14; i++)
        {
            int rem_A = a - i;
            int rem_B = b - i;

            if (rem_A >= 0 && rem_B >= 0)
            {

                if (rem_A % 3 == 0 && rem_B % 3 == 0)
                {
                    minimum_draw = i;
                    break;
                }
            }
        }
        cout << minimum_draw << endl;
    }

    return 0;
}