#include <bits/stdc++.h>

using namespace std;

int n, t;
char a[100];

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> t;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i <= t; i++) 
	{
		for(int j = 1; j <= n; j++) {
			if(a[j] == 'B' && a[j + 1] == 'G')
			{
				swap(a[j], a[j + 1]);
				j++;
			}
		}
	}
	for(int i = 1; i <= n; i++)
		cout << a[i];
	return 0;
}