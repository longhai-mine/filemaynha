#include <bits/stdc++.h>

using namespace std;

long long n;
vector <bool> prime(1e7 + 5, true);

void snt() {
	prime[0] = prime[1] = false;
	for(int i = 2; i * i <= 1e7; i++)
		if(prime[i] == true)
			for(int j = i * i; j <= 1e7; j += i)
				prime[j] = false;
}

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	snt();
	cin >> n;
	long long ans = 0;
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) {
			cout << i;
			if(prime[i] == true)
				ans++;
			if(prime[n / i] == true)
				ans++;
		}
	}
	if(ans == 0)
		cout << 1;
	else
		cout << ans;
}