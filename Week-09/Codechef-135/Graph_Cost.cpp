/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-22 20:58:32
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void bfs(ll n, vector<ll> &a)
{
    vector<ll> dis(n + 1, LLONG_MAX);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    dis[1] = 0;
    pq.push({0, 1});
    while (!pq.empty())
    {
        ll current_dis = pq.top().first;
        ll u = pq.top().second;
        pq.pop();
        if (current_dis > dis[u])
            continue;
        for (ll v = 1; v <= n; ++v)
        {
            if (u != v)
            {
                ll weight = abs(v - u) * max(a[u - 1], a[v - 1]);
                if (dis[u] + weight < dis[v])
                {
                    dis[v] = dis[u] + weight;
                    pq.push({dis[v], v});
                }
            }
        }
    }
    cout << dis[n] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arra(n);
        for (ll i = 0; i < n; i++)
            cin >> arra[i];

        bfs(n, arra);
    }

    return 0;
}
