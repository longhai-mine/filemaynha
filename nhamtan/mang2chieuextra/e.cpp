#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;

long long n;
long long a[N][N];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	for(long long i = 1; i <= n; i++)
		for(long long j = 1; j <= n; j++)
			cin >> a[i][j];

	long long ans1 = 0;
	for(long long i = 1; i <= n; i++) {
		ans1 += a[i][i];
	}

	cout << ans1 << " ";
	
	long long ans2 = 0;
	long long d = 1;
	for(long long i = n; i >= 1; i--) {
		ans2 += a[d][i];
		d++;
	}

	cout << ans2 << "\n";

	return 0;
}