#include <bits/stdc++.h>

using namespace std;

long long n, sum;

bool cmp(long long x, long long y)
{
	return x < y;
}

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	deque < long long > a;
	for(int i = 1; i <= n; i++)
	{
		long long x;
		cin >> x;
		a.push_back(x);
		sum += x;
	}

	sort(a.begin(), a.end(), cmp);
	int ans = 0;
	while(true)
	{
		if(sum == 0)
		{
			cout << ans;
			return 0;
		} 
		else if(sum < 0)
		{
			//cout << a[0] << endl;
			sum -= a[0];
			a.pop_front();
			ans++;
		}
		else
		{
			//cout << a[a.size() - 1] << endl;
			sum -= a[a.size() - 1];
			a.pop_back();
			ans++;
		}
	}
}