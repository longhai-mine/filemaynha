#include <bits/stdc++.h>

using namespace std;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long a, b, x, y;
	cin >> a >> b >> x >> y;
	long long lcmxy = (x * y) / __gcd(x, y);
	long long ans1 = (b / x) - ((a - 1) / x);
	long long ans2 = (b / y) - ((a - 1) / y);
	long long ans3 = (b / lcmxy) - ((a - 1) / lcmxy);
	cout << ans1 + ans2 - ans3;
}