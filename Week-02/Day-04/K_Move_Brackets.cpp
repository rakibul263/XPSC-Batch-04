/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-25 23:04:14
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
        int n;
        string s;
        cin >> n >> s;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (!st.empty())
            {
                st.pop();
            }
        }
        cout << st.size() << '\n';
    }

    return 0;
}