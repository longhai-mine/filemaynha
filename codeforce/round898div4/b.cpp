#include <bits/stdc++.h>

using namespace std;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int ans = 1;
		int a[100];
		int mini = INT_MAX;
		int n;
		cin >> n;
		for(int j = 1; j <= n; j++)
		{
			cin >> a[j];
			mini = min(mini, a[j]);
		}
		for(int j = 1; j <= n; j++)
		{
			if(a[j] == mini && mini != -1)
			{
				a[j]++;
				mini = -1;
			}
			ans *= a[j];
		}
		cout << ans << "\n";
	}
}