/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-30 20:43:21
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (; t--;)
    {
        int N, M;
        int A[200][200];
        cin >> N >> M;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                cin >> A[i][j];
        int ans = 0;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
            {
                int now = -A[i][j];
                for (int k = 0; k < N; k++)
                {
                    int d = abs(i - k);
                    if (j >= d)
                        now += A[k][j - d];
                    if (j + d < M)
                        now += A[k][j + d];
                }
                ans = max(ans, now);
            }
        cout << ans << "\n";
    }

    return 0;
}