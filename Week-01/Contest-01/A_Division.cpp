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
        if (x >= 1900)
        {
            cout << "Division 1"
                 << "\n";
        }
        else if (x >= 1600 and x < 1900)
        {
            cout << "Division 2"
                 << "\n";
        }
        else if (x >= 1400 and x < 1600)
        {
            cout << "Division 3"
                 << "\n";
        }
        else
        {
            cout << "Division 4"
                 << "\n";
        }
    }

    return 0;
}