#include <bits/stdc++.h>
#define int long long
using namespace std;

long long n;

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	vector <int> a(1e6 + 5, 0), b(1e6 + 5, 0), c(1e6 + 5, 0);
/*	vector <int> cnta(1e6 + 5, 0), cntb(1e6 + 5, 0), cntc(1e6 + 5, 0);*/
	int k1, k2, k3;
	cin >> k1;
	for(int i = 1; i <= k1; i++)
	{
		long long x; 
		cin >> x;
		a[x]++;
	}
	cin >> k2;
	for(int i = 1; i <= k2; i++)
	{
		long long x;
		cin >> x;
		b[x]++;
	}	
	cin >> k3;
	for(int i = 1; i <= k3; i++)
	{
		long long x;
		cin >> x;
		c[x]++;
	}
	for(int i = 1; i <= n; i++)
	{
		a[i] += a[i - 1];
		b[i] += b[i - 1];
		c[i] += c[i - 1];
	}
	/*for(int i = 1; i <= n; i++)
		cout << a[i] << " ";
	cout << endl;
	for(int i = 1; i <= n; i++)
		cout << b[i] << " ";
	cout << endl;
	for(int i = 1; i <= n; i++)
		cout << c[i] << " ";
	cout << endl;*/
	long long ans = INT_MAX;
	for(int i = 1; i <= n; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{
			int cnta = (i - a[i]);
			int cntb = j - i - (b[j] - b[i]);
			int cntc = n - j - (c[n] - c[j]);
			if(cnta + cntb + cntc < ans)
			{
				/*cout << cnta << " " << cntb << " " << cntc << " " << i << " " << j << endl;*/
				ans = cnta + cntb + cntc;
			}
		}
	}
	cout << ans;
}