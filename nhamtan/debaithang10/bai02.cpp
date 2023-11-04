/*
    AUTHOR:    longhaiUwU
    CREATED:   31.10.2023 21:59:57                                 

*/
#include <bits/stdc++.h>

using namespace std;

int prime[(int)1e6 + 5], ans, n;

void snt() 
{
	prime[1] = prime[0] = 1;
	for(int i = 2; i * i <= 1e6; i++) 
	{
		if(prime[i] == 0) 
			for(int j = i * i; j <= 1e6; j += i)
				prime[j] = 1;
	}			
}

bool check(int x)
{
	while(x != 0)
	{
		if(prime[x] != 0)
			return false;
		x /= 10; 
	}
	return true;
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	snt();
	cin >> n;
	for(int i = 1; i <= n; i++) 
	{
		int x;
		cin >> x;
		if(check(x))
			ans++;
	}
	cout << ans;
}