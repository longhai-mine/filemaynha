#include <bits/stdc++.h>

using namespace std;

const long long N = 1e3 + 5;

long long n, m, t, s;
long long a[N][N];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m;
	for(long long i = 1; i <= n; i++) {
		for(long long j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	for(long long i = 1; i <= n; i++)
		for(long long j = 1; j <= m; j++) {
			if(i % 2 == 0 and j % 2 != 0)
			{
				t++;
				s += a[i][j];
			}
		}

	cout << fixed << setprecision(5) << (double)s / t;

	return 0;
}