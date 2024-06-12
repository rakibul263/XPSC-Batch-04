/******************************
 * author: Md Rakibul Hasan
 * date: 2024-06-12 22:44:13
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long t;
    scanf("%ld", &t);
    while (t--)
    {
        long n;
        scanf("%ld", &n);
        for (long p = 0; p < n; p++)
        {
            long x;
            scanf("%ld", &x);
        }
        if (n % 2)
        {
            printf("4\n2 %ld\n2 %ld\n1 2\n1 2\n", n, n);
        }
        else
        {
            printf("2\n1 %ld\n1 %ld\n", n, n);
        }
    }

    return 0;
}