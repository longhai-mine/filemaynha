#include <bits/stdc++.h>

using namespace std;

int n, P;
int a[1000'005], p[1000'005];

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> P;
	for(int i = 1; i <= n; i++)
		cin >> a[i];

	p[1] = a[1];
	for(int i = 2; i <= n; i++) 
	{
		p[i] = min(p[i - 1], a[i]);
	}

	bool OK = false;
	int ans_i = 0, ans_j = 0;
	for(int i = 1; i <= n; i++) 
	{
		int l = 1, r = i;
		int temp1, temp2;
		while(l <= r)
		{
			int mid = (l + r) / 2;
			if(a[i] - p[mid] >= P) 
			{
				OK = true;
				temp1 = mid, temp2 = i;
				r = mid - 1;
			}
			else
				l = mid + 1;
		}
		if(OK) 
		{
			if(temp2 - temp1 > ans_j - ans_i)
			{
				ans_i = temp1;
				ans_j = temp2;
			}
		}
	}
	if(OK)
	{
		cout << ans_i << " " << ans_j;
	}
	else
		cout << 0;
}