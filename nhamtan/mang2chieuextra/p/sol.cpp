/*==========================================================================*/
/*
    AUTHOR:    ccf 
    CREATED:   28.08.2023 22:01:51                                 

*/
/*--------------------------------------------------------------------------*/
#include <bits/stdc++.h>

using namespace std;

const int mod = (int)1e9 + 7;

long long n, m;
long long x, y, u, v;

long long cal(long long bien) {
 	return (bien * (bien + 1) / 2);
}

long long tongmang(long long u1, long long v1, long long u2, long long v2) {
	return (((cal(u2) - cal(u1 - 1)) % mod) * ((cal(v2) - cal(v1 - 1)) % mod)) % mod;  
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	cin >> x >> y >> u >> v;
	long long ans = tongmang(1, 1, n, m);
	ans = ((ans - tongmang(x, y, u, v)) % mod + mod) % mod;	
	cout << ans << "\n";
	return 0;
}