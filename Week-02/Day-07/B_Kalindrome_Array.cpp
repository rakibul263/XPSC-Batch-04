/******************************
 * author: Md Rakibul Hasan
 * date: 2024-03-28 10:51:43
 ******************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ckkalindrome(vector<int> v, int x)
{
	int n = v.size(), i = 0, j = n - 1;

	while (i < j)
	{
		if (v[i] == x)
			i++;
		else if (v[j] == x)
			j--;
		else if (v[i] != v[j])
			return 0;
		else
			i++, j--;
	}
	return 1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);

		for (int i = 0; i < n; ++i)
			cin >> v[i];

		bool flag = 1; // n==1 and n==2

		for (int i = 0; i < n - 1 - i; ++i)
			if (v[i] != v[n - 1 - i])
			{
				flag = ckkalindrome(v, v[i]) or ckkalindrome(v, v[n - 1 - i]);
				break;
			}

		if (flag)
			cout << "YES\n";

		else
			cout << "NO\n";
	}

	return 0;
}