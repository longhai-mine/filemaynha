#include <bits/stdc++.h>
#define int long long

using namespace std;

const int N = 1e5 + 5;

int n, q;
int a[N];

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> q;
	for(int i = 1; i <= n; i++) 
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}

	while(q--)
	{
		int u, v;
		cin >> u >> v;
		int l = u, r = v;
		int pos = u - 1;
		int ans = INT_MAX;
		while(l <= r)
		{
			int mid = (l + r) / 2;
			if(a[mid] - a[u - 1] <= a[v] - a[mid])
			{
				pos = mid;
				l = mid + 1;
			}
			else 
			{
				r = mid - 1;
			}
		}
		if(pos) 
		{
			ans = min(ans, a[v] - a[pos] - (a[pos] - a[u - 1]));
		}
		if(pos != v)
		{
			ans = min(ans, a[pos + 1] - a[u - 1] - (a[v] - a[pos + 1]));
		}
		cout << ans << "\n";
	}
}