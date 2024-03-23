/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-23 12:24:48
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1 = "Timur";
    sort(s1.begin(), s1.end());

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s2;
        cin >> s2;
        sort(s2.begin(), s2.end());
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}