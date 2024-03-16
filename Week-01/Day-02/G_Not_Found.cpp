#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    set<char> sequence;

    for (char ch = 'a'; ch <= 'z'; ch++)
        sequence.insert(ch);

    for (char c : s)
    {
        sequence.erase(c);
    }
    if (sequence.empty())
        cout << "None" << '\n';
    else
        cout << *sequence.begin() << '\n';

    return 0;
}