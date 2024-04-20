/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-20 12:26:05
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {2, 3, 4, 5, 7};

    auto it = upper_bound(v.begin(), v.end(), 7);

    if (it == v.end())
        cout << "Not present" << endl;
    else
        cout << "Present" << endl;

    return 0;
}