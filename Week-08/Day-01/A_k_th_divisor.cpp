/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-11 21:31:15
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll i,j,k;
    ll n,sum;

    cin>>n>>k;

    set<ll> v;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.insert(i);
            v.insert(n/i);
        }
    }

    if(v.size()<k)
        cout<<"-1";

    else
    {
        set<ll>::iterator p=v.begin();
        j=1;

        while(1)
        {
            if(j==k)
            {
                cout<<*p;
                break;
            }p++;j++;
        }

    }

    return 0;
}