/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-29 21:40:52
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
        string s;
        cin >> s;
        int range_of_x = 1, range_of_y = 1;

        if (s[0] == '1')
            range_of_x += 10;
        if (s[1] == '1')
            range_of_x += 10;
        if (s[2] == '1')
            range_of_y += 10;
        if (s[3] == '1')
            range_of_y += 10;

        cout << range_of_x * range_of_y << endl;
    }

    return 0;
}