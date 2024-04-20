/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-20 11:23:09
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {2, 3, 4, 4, 6, 9, 10};

    auto it = lower_bound(v.begin(), v.end(), 11);

    // cout << *it << endl;
    // for index
    // cout << it - v.begin() << endl;
    if (it == v.end())
        cout << "Not present" << endl;
    else
        cout << "Present" << endl;

    return 0;
}