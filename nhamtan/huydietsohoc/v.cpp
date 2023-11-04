#include <bits/stdc++.h>

using namespace std;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long a, b, k;
	cin >> k >> a >> b;
	long long ans = (b / k);
	long long ans2 = ((a - 1) / k);
	cout << ans - ans2;
}