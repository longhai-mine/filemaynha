#include <bits/stdc++.h>

using namespace std;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	long long ans = 0;
	for(int i = 2; i <= n; i += 2)
	{
		int temp = i;
		while(temp % 2 == 0) ans++, temp /= 2;
	}
	cout << ans;
}