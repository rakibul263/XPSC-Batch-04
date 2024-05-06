/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-06 21:31:25
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        
        for (int i = 1; i <= n; i++)
            arr[i] = i * 2;
            
        for (int i = 1; i <= n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    return 0;
}