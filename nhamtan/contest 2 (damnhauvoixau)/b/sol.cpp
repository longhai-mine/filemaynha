/*==========================================================================*/
/*
    AUTHOR:    ccf 
    CREATED:   29.08.2023 21:32:58                                 

*/
/*--------------------------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

char a[1005][1005];
int n, m;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	int ans = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j + 2 <= m; j++) {
			if(a[i][j] == 't' && a[i][j + 1] == 'a' && a[i][j + 2] == 'n') 
				ans++;
		}
	}

	for(int j = 1; j <= m; j++) {
		for(int i = 1; i + 2 <= n; i++) {
			if(a[i][j] == 't' && a[i + 1][j] == 'a' && a[i + 2][j] == 'n')
				ans++;
		}
	}
	cout << ans;
	return 0;
}