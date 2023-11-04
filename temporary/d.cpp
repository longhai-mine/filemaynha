#include <bits/stdc++.h>

using namespace std;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long n, k;
	vector < int > a(n + 5);
	cin >> n >> k;	
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	/*for(int i = 1; i <= n; i++)
		cout << a[i] << " ";*/
	if(n < 3)
	{
		cout << 0;
		return 0;
	}
	int ans = 0;
	for(int i = 1; i <= n - 2; i++)
	{
		int temp = k;
		for(int j = i + 1; j <= n; j++)
		{
			if(a[j] > a[j - 1])
				temp--;
			if(temp == 0)
				break;
			else
			{
				cout << i << " " << j << endl;
			}
		}
	}
	cout << ans;
}