#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;

long long n, ans;
long long a[N][N];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	for(long long i = 1; i <= n; i++)
		for(long long j = 1; j <= n; j++)
			cin >> a[i][j];

	for(long long i = 1; i <= n; i++) {
		for(long long j = 1; j <= n; j++) {
			if((i - j) == 0 || (i + j) == n + 1 || (i == 1 || i == n || j == 1 || j == n))
				ans += a[i][j];
		}
	}

	cout << ans;
	return 0;
}
