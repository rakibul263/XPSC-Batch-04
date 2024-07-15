/***************************************
Author: Md Rakibul Hasan
date: 2024-07-07 22:19:10
****************************************/

#include <bits/stdc++.h>
using namespace std;

void solution()
{
    string s;
    cin >> s;
    // cout << s << endl;
    if (s == "abc" || s == "acb" || s == "bac" || s == "cba")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solution();

    return 0;
}