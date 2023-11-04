#include <bits/stdc++.h>
#define int long long
using namespace std;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	vector <int> a(n + 5), gcd_(n + 5);
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	long long ans = -1e18;
	for(int i = 1; i + k - 1<= n; i++)
	{
		long long temp = a[i];
		for(int j = 1; j <= k; j++)
		{
			temp = __gcd(a[j + i - 1], temp);
		}
		ans = max(ans, temp);
	}
	cout << ans;
}