#include <bits/stdc++.h>

using namespace std;

const int n = (int)1e3 + 5;

int N, M, K;
int A[n][n], g[n][n];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M >> K;
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= M; j++) {
			A[i][j] = i * j;
		}
	}

	while(K--) {
		int x, y, u, v;
		cin >> x >> y >> u >> v;
		g[x][y]++;
		g[u + 1][y]--;
		g[x][v + 1]--;
		g[u + 1][v + 1]++;
	}

	for(int j = 1; j <= M; j++) {
		for(int i = 1; i <= N; i++) {
			g[i][j] += g[i - 1][j];
		}
	}

	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= M; j++) {
			g[i][j] += g[i][j - 1];
		}
	}

	long long s = 0;
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= M; j++) {
			if(g[i][j] == 0) {
				s += A[i][j];
			}
		}
	}

	cout << s;

	return 0;
}