/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-06 21:03:00
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, j = 0;
    cin >> n;
    string s[] = {"b", "b", "a", "a"};

    for (int i = 0; i < n; i++)
    {
        cout << s[j];
        j++;
        if (j == 4)
            j = 0;
    }
    cout << endl;

    return 0;
}