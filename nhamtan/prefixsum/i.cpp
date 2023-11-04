#include <bits/stdc++.h>

using namespace std;

int n, m, k;
char a[1005][1005];

main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	}
	int ans = 0, dem = 0;
	for(int i = 1; i + k - 1 <= n; i++) 
	{
		for(int j = 1; j + k - 1 <= m; j++)
		{
			int s = 0;
			int cnt[3000];
			for(char x = 'a'; x <= 'z'; x++)
				cnt[x] = 0;
			//xet tung gia tri trong cai mang k * k
			for(int i1 = 1; i1 <= k; i1++) {
				for(int j1 = 1; j1 <= k; j1++) {
					cnt[a[i1 + k - 1][j1 + k - 1]]++;
				}
			}
			for(char x = 'a'; x <= 'z'; x++) {
				if(cnt[x] > 0)
					s++;
			}

			if(s > ans) 
			{
				ans = s;
				dem = 1;
			}
			else if(s == ans)
			{
				dem++;			
			}
		}
	}
	cout << ans << " " << dem;
}
