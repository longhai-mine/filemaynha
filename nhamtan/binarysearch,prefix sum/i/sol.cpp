/*
    AUTHOR:    ccf 
    CREATED:   02.09.2023 14:54:11                                 

*/
#include <bits/stdc++.h>

using namespace std;

int n, k;
pair <long long, long long> a[1000005];
long long sum[10000005], ans;

bool cmp(pair <int, int> c, pair <int, int> b) {
	return c.first < b.first;
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a + 1, a + n + 1, cmp);
	for(int i = 1; i <= n; i++) {
		sum[i] = sum[i - 1] + a[i].second;		
	}

	for(int i = 1; i <= n; i++) {
		int l = 1;
		int r = i;
		int pos = -1;
		while(l <= r) {
			int mid = (l + r) / 2;
			if(a[i].first - a[mid].first <= 2 * k) {
				pos = mid;
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
		ans = max(ans, sum[i] - sum[pos - 1]);
	}
	cout << ans;
}
