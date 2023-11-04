#include <bits/stdc++.h>

using namespace std;


bool check(long long x)
{
	int dem = 0;
	for(int i = 2 ; i * i <= x; i++)
	{
		if(x % i == 0)
		{
			int mu = 0;
			while(x % i == 0)
			{
				x /= i;
			}
			dem++;
			if(mu > 2)
				return false;
		}
	}
	if(x > 1)
		dem++;
	return dem == 2;
}
main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin >> n;
	for(int i = n; i >= 1; i--)
	{
		if(check(i)) 
		{
			cout << i;
			break;
		}
	}
}