/*
    AUTHOR:    longhaiUwU 
    CREATED:   31.10.2023 21:52:15                                 

*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod = 1e9;
long long n, m, a, b;

long long somu(long long x, long long y) {
	if(y == 1)
		return x;
	else if(y % 2 == 0)
		return (somu(x, (int)y / 2) % mod * somu(x, (int)y / 2) % mod) % mod;
	else
		return (somu(x, (int)y / 2) % mod * somu(x, (int)y / 2) % mod * x % mod) % mod; 	
}
main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b >> n >> m;
	long long ans = (somu(a, n) % mod + somu(b, m) % mod) % mod;
	cout << ans;
}