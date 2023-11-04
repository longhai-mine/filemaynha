#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
const int M = 1e6 + 5;
long long n, m;
long long a[N][N];
long long cheotrai[M], cheophai[M];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	long long cot = -1e18;
	for(int j = 1; j <= m; j++) {
		long long temp = 0;
		for(int i = 1; i <= n; i++) {
			temp += a[i][j];
		}

		cot = max(cot, temp);
	}

	long long hang = -1e18; 
	for(int i = 1; i <= n; i++) {
		long long temp = 0;
		for(int j = 1; j <= m; j++) {
			temp += a[i][j];
		}

		hang = max(hang, temp);
	}
	long long mod = 1e3;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cheotrai[i + j] += a[i][j];
			cheophai[i - j + mod] += a[i][j];
		}
	}

	long long ans1 = *max_element(cheotrai + 1, cheotrai + (long long)1e6 + 1);
	long long ans2 = *max_element(cheophai + 1, cheophai + (long long)1e6 + 1);
	cout << hang << " " << cot << " " << ans2 << " " << ans1;
	return 0;
}
