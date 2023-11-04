#include <bits/stdc++.h>
#define int long long
using namespace std;
long long POW(long long x, long long n)
{
	long long res = 1;
	for(long long i = 1; i <= n; i++)
		res *= x;
	return res;
}
main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// for(int i = POW(10, n - 1); i <= POW(10, n) - 1; i++)
	// {
	// 	if((i % 2 == 0) && (i % 3 == 0) && (i % 5 == 0) && (i % 7 == 0) && (i % 11 == 0))
	// 	{
	// 		cout << i;
	// 		return 0;
	// 	}
	// }
	cout << POW(10, n - 1) << " " << POW(10, n) - 1 << endl;
	cout << -1;
}