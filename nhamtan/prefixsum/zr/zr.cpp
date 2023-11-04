#include <bits/stdc++.h>

using namespace std;
#define int long long
int n, R;
int a[1000005];
int ds[1000005];

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> R;
	int sz = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if(n % i == 0)
		{
			sz++;
			ds[sz] = i;
		}
	}
	int l = 1, r = sz;
	int ans;
	while(l <= r)
	{
		int mid = (l + r) / 2;
		int OK = true;
		int sum = 0;
		for(int i = 1; i <= n; i++)
		{
			sum += a[i];
			if(i % ds[mid] == 0)
			{
				if(sum < R) 
				{
					OK = false;
					break;
				}
				sum = 0;
			}
		}
		if(OK)
		{
			ans = ds[mid];
			r = mid - 1;
		}
		else 
		{
			l = mid + 1;
		}
	}
	cout << ans;
}