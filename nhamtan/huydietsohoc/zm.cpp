#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = (int)20;

int a[1005];

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, x;
	cin >> n >> x;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	long long ans = a[1];
	for(int i = 2; i <= n; i++)
	{
		ans = (a[i] * ans) / __gcd(a[i], ans);
	}
	ans = (x + ans - 1) / ans * ans;	
	cout << ans;
}