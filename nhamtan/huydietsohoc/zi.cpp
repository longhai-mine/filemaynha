#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int mod = 1e9 + 7;
    cin >> n;
    int ans = 1;
    for(int i = 1; i <= n; i++)
    	ans = (ans * i) / __gcd(ans, i) % mod;
    cout << ans % mod;
}