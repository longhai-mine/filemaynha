#include <bits/stdc++.h>

using namespace std;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--)
	{
		long long k;
		cin >> k;
		long long l = 1, r = k;
		long long ans;
		while(l <= r)
		{
			long long mid = (l + r) / 2;
			if((mid * (mid + 1) / 2) <= k)
			{
				ans = mid;
				l = mid + 1;
			} else
				r = mid - 1;
		}
		cout << ans << "\n";
	}
}
