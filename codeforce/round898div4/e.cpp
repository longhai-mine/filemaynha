#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = (int)1e6 + 5;
int a[N];

int check(int mid, int n)
{
	int s = 0;
	for(int i = 1; i <= n; i++)
		s += max(0LL, mid - a[i]);
	return s;
}

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		int n, x;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		int l = 0, r = 2e9, ans;
		while(l <= r)
		{
			int mid = (l + r) / 2;
			if(check(mid, n) <= x)
			{
				ans = mid;
				l = mid + 1;
			}
			else
				r = mid - 1;
		}
		cout << ans << "\n";
	}
}