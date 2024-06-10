/******************************
 * author: Md Rakibul Hasan
 * date: 2024-06-10 21:31:29
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    vector<ll> odd;
    vector<ll> even;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            odd.push_back(v[i]);
        }
        else
            even.push_back(v[i]);
    }
    reverse(all(odd));
    for (auto &x : even)
    {
        cout << x << " ";
    }
    for (auto &x : odd)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}