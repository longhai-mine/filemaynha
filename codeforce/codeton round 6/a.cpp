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
		int n, k, x;
		cin >> n >> k >> x;
		if(x >= k - 1 && n >= k)
		{
			int ans = ((k - 1) * k) / 2;
			long long maxi;
			if(x > k)
				maxi = x;
			else if(x == k)
				maxi = k - 1;
			else
				maxi = x;
			cout << ans + (n - k) * maxi << "\n";			
		}
		else
			cout << -1 << "\n";
	}
}