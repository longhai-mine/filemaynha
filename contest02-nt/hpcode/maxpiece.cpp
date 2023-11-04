#include <bits/stdc++.h>

using namespace std;

int n, m, k;
vector < int > a, b;

bool cmp(long long x, long long y) 
{
	return x < y;
}

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m >> k;
	for(int i = 1; i <= k; i++) 
	{
		int t; 
		cin >> t;
		if(t == 0) 
		{
			int d;
			cin >> d;
			a.push_back(d);
		}
		else
		{
			int d;
			cin >> d;
			b.push_back(d);
		}
	}
	sort(a.begin(), a.end(), cmp);
	sort(b.begin(), b.end(), cmp);
	
	int d1 = 0;
	if(a.size() == 0)
		d1 = m;
	else
		for(int i = 0 ; i < a.size(); i++)
		{
			if(i == 0 && a.size() != 1)
				d1 = a[i];
			else if(i == a.size() - 1)
				d1 = max(d1, max(a[i] - a[i - 1], m - a[i]));
			else
				d1 = max(d1, a[i] - a[i - 1]);
		}

	int d2 = 0;
	if(b.size() == 0)
		d2 = n;
	else
		for(int i = 0 ; i < b.size() ; i++)
		{
			if(i == 0)
				d2 = b[i];
			else if(i == b.size() - 1)
				d2 = max(d2, max(b[i] - b[i - 1], n - b[i]));
			else
				d2 = max(d2, b[i] - b[i - 1]);
		}

	cout << min(d1, d2);
}