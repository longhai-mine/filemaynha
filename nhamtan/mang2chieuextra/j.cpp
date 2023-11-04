#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;

int n, m;
char a[N][N], c;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m >> c;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	int s = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(a[i][j] == c)
				s++;
		}
	}

	cout << s;
	
	return 0;
}