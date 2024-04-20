/******************************
 * author: Md Rakibul Hasan
 * date: 2024-04-20 13:45:58
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int closestToTheLeft(vector<int> &arr, int terget)
{
    int l = 0, r = arr.size() - 1, ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (terget >= arr[mid])
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (k--)
    {
        int key;
        cin >> key;
        int result = closestToTheLeft(a, key);
        cout << result + 1 << endl;
    }

    return 0;
}