/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-20 10:58:33
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s_value;
    cin >> n >> s_value;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, r = n - 1;
    bool flag = false;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == s_value)
        {
            flag = true;
            break;
        }
        else if (arr[mid] < s_value)
            r = mid - 1;

        else
            l = mid + 1;
    }
    if (flag)
        cout << "Found" << '\n';
    else
        cout << "Not Found" << '\n';
    return 0;
}