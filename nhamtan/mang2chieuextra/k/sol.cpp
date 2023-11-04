/*==========================================================================*/
/*
    AUTHOR:    ccf 
    CREATED:   28.08.2023 16:11:51                                 

*/
/*--------------------------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

int n, m, k;
char a[55][55];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> a[i][j];	
		}	
	}
	int ans = 0, cnt = 0;
	for(int i = 1; i + k - 1 <= n; i++) {
		for(int j = 1; j + k - 1 <= m; j++) {
			int b[3003]; 
			for(char letter = 'a'; letter <= 'z'; letter++) {
				b[(int)letter] = 0;
			}
			for(int i_ = 1; i_ <= k; i_++) {
				for(int j_ = 1; j_ <= k; j_++) {
					 b[(int)a[i_ + i - 1][j_ + j - 1]]++;
				}
			}

			int temp = 0;
			for(int per = 1; per <= 256; per++) {
			 if(b[per] > 0) 
			 	temp++;
			}
			if(temp > ans) {
				ans = temp;
				cnt = 1;
			}
			else if(temp == ans) {
				cnt++;
			}
			//cout << a[i][j] << " ";  
		}
		//cout << endl;
	}          
	cout << ans << " " << cnt << "\n";

	return 0;
}