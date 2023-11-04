#include <bits/stdc++.h>
#define int long long
using namespace std;

long long check(long long x)
{
	long long ans = 0;
	for(int i = 1; i <= sqrt(x); i++)
	{
		if(x % i == 0)
		{
			ans++;
			if(i != x / i)
				ans++;
		}
	}
	return ans;
}

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	long long ans = 0;
	for(int i = 1; i <= n; i++)
	{
		long long x;
		cin >> x;
		ans = max(ans, check(x));
	}
	cout << ans;
}	