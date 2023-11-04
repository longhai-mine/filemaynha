#include <bits/stdc++.h>

using namespace std;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		long long ans = 0;
		for(int i = 1; i <= 10; i++)
			for(int j = 1; j <= 10; j++)
			{
				char x;
				cin >> x;
				if(x == 'X')
				{
					if(j == 1 || j == 10 || i == 1 || i == 10)
						ans++;
					else if(j == 2 || j == 9 || i == 2 || i == 9)
						ans += 2;
					else if(j == 3 || j == 8 || i == 3 || i == 8)
						ans += 3;
					else if(j == 4 || j == 7 || i == 4 || i == 7)
						ans += 4;
					else 
						ans += 5;
				}
			}
		cout << ans << "\n";
	}
}