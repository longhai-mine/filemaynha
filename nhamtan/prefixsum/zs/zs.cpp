#include <bits/stdc++.h>
#define int long long
#define int64 int64_t
using namespace std;

int n, R;
int a[1005][1005], q[1005][1005];

bool process(long long x)
{
	for(int i = 1; i + x - 1 <= n; i++)
	{
		for(int j = 1; j + x - 1 <= n; j++)
		{
			int temp = q[i + x - 1][j + x - 1] - q[i + x - 1][j - 1] - q[i - 1][j + x - 1] + q[i - 1][j - 1];
			if(temp <= R)
				return true;
		}
	}
	return false;
}
	
main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> R;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			q[i][j] = q[i - 1][j] + q[i][j - 1] - q[i - 1][j - 1] + a[i][j];
		}
	}

	int l = 1, r = 1e3;
	int ans;
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(process(mid))
		{
			ans = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	cout << ans;
}