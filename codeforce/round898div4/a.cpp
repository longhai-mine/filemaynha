#include <bits/stdc++.h>

using namespace std;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int ans = 0;
		char x[3];
		char check[3] = {'a', 'b', 'c'};
		for(int j = 0; j < 3; j++)
		{
			cin >> x[j];	
		}
		for(int j = 0; j < 3; j++)
		{
			if(x[j] != check[j])
				ans++;
		}
		if(ans <= 2)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
		// cout << ans << "\n";
	}
}