/******************************
 * author: Md Rakibul Hasan
 * date: 2024-05-18 22:40:31
 ******************************/

#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    vector<int> songs(n);
    for (int i = 0; i < n; i++)
        cin >> songs[i];
    set<int> play_song;
    int ans = 0;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        while (j < n && !play_song.count(songs[j]))
        {
            play_song.insert(songs[j]);
            ans = max(ans, j - i + 1);
            j++;
        }
        while (j < n && play_song.count(songs[j]))
        {
            play_song.erase(songs[i]);
            i++;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve()<< endl;
    
    return 0;
}