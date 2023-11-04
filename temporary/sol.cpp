/*
    AUTHOR:    ccf 
    CREATED:   10.09.2023 14:17:08                                 

*/
#include <bits/stdc++.h>

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	long long t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		long long ans = (n * (n + 1) * (2 * n + 1)) / 2;
		cout << ans << "\n";
	}
}
