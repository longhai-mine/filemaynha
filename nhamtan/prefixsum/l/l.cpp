#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5;

int n, m, ta, tb, k;
int a[N], b[N];

int bns(long long x)
{
	int ans = k + 1;
	int l = 1, r = m;
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(b[mid] >= x)
		{
			ans = mid;
			r = mid - 1;
		}
		else
			l = mid + 1;
	}
	return ans;
}

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m >> ta >> tb >> k;
	for(int i = 1; i <= n; i++)
		cin >> a[i];

	for(int i = 1; i <= m; i++)
		cin >> b[i];

	if(k >= n)
	{
		cout << - 1;
		return 0;
	}
	int ans = -1;
	for(int i = 1; i <= k + 1; i++)
	{
		int t = bns(a[i] + ta);
		if(t + k - (i - 1) > m)
		{
			cout << - 1;
			return 0;
		}
		ans = max(ans, b[t + k - (i - 1)] + tb);
	}
	cout << ans;	
}