#include <bits/stdc++.h>
#define int long long
using namespace std;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int m;
	cin >> m;
	int ans1 = m / 3;
	int an = 3 + (ans1 - 1) * 3;
	ans1 = ans1 * (3 + an) / 2;
	int ans2 = m / 15;
	an = 15 + (ans2 - 1) * 15;
	ans2 = ans2 * (15 + an) / 2;
	cout << ans1 - ans2;
}