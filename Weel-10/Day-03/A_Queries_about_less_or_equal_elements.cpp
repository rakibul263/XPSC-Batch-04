/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-27 17:22:45
 ******************************/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    pbds<int> p;
    for (int i = 1; i <= a; i++)
    {
        int x;
        cin >> x;
        p.insert(x);
    }
    for (int i = 1; i <= b; i++)
    {
        int x;
        cin >> x;
        cout << p.order_of_key(x + 1) << " ";
    }
    cout << '\n';

    return 0;
}