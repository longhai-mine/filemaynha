#include <bits/stdc++.h>

using namespace std;

vector <int> snt(2e6 + 5, 0);
void prime()
{
	for(int i = 1; i <= 2e6; i++)
		for(int j = i; j <= 2e6; j += i)
			snt[j]++;
}

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	prime();
	int n, k;
	cin >> n >> k;
	long long ans = 0;
	for(int i = 1; i <= n; i++)
	{
		if(snt[i] == k)
			ans++;
	}
	cout << ans;
}