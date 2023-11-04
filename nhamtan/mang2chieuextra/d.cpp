#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;

long long n, m;
long long a[N][N];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m; 
	for(long long i = 1; i <= n; i++)
		for(long long j = 1; j <= m; j++)
			cin >> a[i][j];

	for(long long j = 1; j <= m; j++) {
		long long ans = 1e18;
		for(long long i = 1; i <= n; i++) {
			ans = min(ans, a[i][j]);
		}
		cout << ans << "\n";
	}

	return 0;
}