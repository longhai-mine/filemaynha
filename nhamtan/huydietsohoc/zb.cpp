#include <bits/stdc++.h>

using namespace std;

bool check(long long x)
{
	for(int i = 2; i * i <= x; i++)
		if(x % i == 0) return false;
	return true;
}

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int i = n + 1;
	while(true)
	{
		if(check(i))
		{
			cout << i;
			return 0;
		}
		++i;
	}
}