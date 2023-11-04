#include <bits/stdc++.h>

using namespace std;

long long s, n, m, k;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m >> k;
	for(long long i = 1; i <= n * m; i++)
	{
		long long x; cin >> x;
		if(x == k)
			s++;
	}

	cout << s;
	
	return 0;
}