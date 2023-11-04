#include <bits/stdc++.h>

using namespace std;
#define int long long
int n, q;
int a[1005][1005], b[1005][1005], prefb[1005][1005];

bool check(long long x)
{
	if(x == 1)
		return false;
	for(int i = 2; i <= x - 1; i++)
		if(x % i == 0)
			return false;
	return true;
}

int process(long long x)
{
	int temp = x;
	int OK = true;
	while(OK)
	{
		temp++;
		if(check(temp))
			OK = false;
	}
	return temp;
}

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> q;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++)
		{
			if(check(a[i][j]) == false)
			{
				b[i][j] = process(a[i][j]) - a[i][j];
			}
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			prefb[i][j] = prefb[i - 1][j] + prefb[i][j - 1] - prefb[i - 1][j - 1] + b[i][j];
		}
	}
	while(q--)
	{
		int x, y, u, v;
		cin >> x >> y >> u >> v;
		int ans = prefb[u][v] - prefb[u][y - 1] - prefb[x - 1][v] + prefb[x - 1][y - 1];
		cout << ans << "\n";
	}
}