/******************************
* author: Md Rakibul Hasan
* date: 2024-05-10 21:23:52
******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(a>b)
            cout<<b<<" "<<a<<endl;
        else 
            cout<<a<<" "<<b<<endl;
    }

    return 0;
}