/***************************************
Author: Md Rakibul Hasan
date: 2024-07-03 17:22:28
****************************************/

#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n, m;
    cin >> n >> m;
    string s, c;
    cin >> s;
    set<int> st;
    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        st.insert(x - 1);
    }
    cin >> c;
    sort(c.begin(), c.end());
    int i = 0;
    for (auto x : st)
        s[x] = c[i++];
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}