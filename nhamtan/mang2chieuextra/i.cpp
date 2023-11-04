#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int n, m;
int a[N];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= n * m; i++) {
		cin >> a[i];
	}
	
	sort(a + 1, a + (n * m) + 1);
	int cnt = 1;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cout << a[cnt] << " ";
			cnt++;
		}

		cout << "\n";
	}
	return 0;
}

