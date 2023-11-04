#include <bits/stdc++.h>

using namespace std;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int ans = INT_MAX;
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			int di, si;
			cin >> di >> si;
			int temp = (si - 1) / 2;
			ans = min(ans,di + temp);
		}
		cout << ans << "\n";
	}
}