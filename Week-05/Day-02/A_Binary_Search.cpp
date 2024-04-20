/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-20 12:44:15
 ******************************/

#include <bits/stdc++.h>
using namespace std;

bool binary_search(vector<int> &arr, int q)
{
    int l = 0, r = arr.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == q)
        {
            return true;
            break;
        }
        else if (q > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < q; i++)
    {
        int query;
        cin >> query;
        if (binary_search(arr, query))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}